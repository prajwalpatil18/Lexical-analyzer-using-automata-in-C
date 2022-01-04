# Lexical-analyzer-using-automata-in-C
# it is the first step of compiler which identfies the legal tokens from the code and passes it to the syntax analyzer for checking the syntax which is second step of compiler.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int iskeyword(char str[])
{

    char k[32][32] = {"if", "else", "break", "while", "do", "for", "continue", "default", "int", "char", "double", "float", "switch", "case", "goto", "long", "unsigned", "void", "short", "sizeof", "struct", "static", "return", "typedef"};

    for (int i = 0; i < 32; ++i)
    {
        if (strcmp(k[i], str) == 0)
        {
            return 1;
        }
    }

    return 0;
}

int isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
        ch == '>' || ch == '<' || ch == '=')
    {
        return 1;
    }

    return 0;
}

int isdelimiter(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
    {
        return 1;
    }
    return 0;
}

int isidentifier(char *str)
{
    int dfa = 1;

    void state1(char c)
    {
        if (isalpha(c))
        {
            dfa = 2;
        }
        else
        {
            dfa == 3;
        }
    }

    void state2(char c)
    {
        if (isalnum(c))
        {
            dfa = 2;
        }
        else
        {
            dfa = 3;
        }
    }

    dfa = 1;
    int k = strlen(str);
    for (int i = 0; i < k; i++)
    {
        if (dfa == 1)
        {
            state1(str[i]);
        }
        else if (dfa == 2)
        {
            state2(str[i]);
        }
        else
        {
            return -1;
        }
    }

    if (dfa == 2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int isinteger(char *str)
{

    int dfa = 1;

    void state1(char c)
    {
        if (isdigit(c))
        {
            dfa = 2;
        }
        else
        {
            dfa == 3;
        }
    }

    void state2(char c)
    {
        if (isdigit(c))
        {
            dfa = 2;
        }
        else
        {
            dfa = 3;
        }
    }

    int k = strlen(str);
    for (int i = 0; i < k; i++)
    {
        if (dfa == 1)
        {
            state1(str[i]);
        }

        else if (dfa == 2)
        {
            state2(str[i]);
        }
        else
        {
            return -1;
        }
    }

    if (dfa == 2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int isdecimal(char *str)
{

    int dfa = 1;

    void state1(char c)
    {
        if (isdigit(c))
        {
            dfa = 2;
        }
        else
        {
            dfa == 3;
        }
    }

    void state2(char c)
    {
        if (isdigit(c))
        {
            dfa = 2;
        }
        else if (c == '.')
        {
            dfa = 4;
        }
        else
        {
            dfa = 3;
        }
    }

    void state4(char c)
    {
        if (isdigit(c))
        {
            dfa = 4;
        }
        else
        {
            dfa = 3;
        }
    }

    int k = strlen(str);
    for (int i = 0; i < k; i++)
    {
        if (dfa == 1)
        {
            state1(str[i]);
        }

        else if (dfa == 2)
        {
            state2(str[i]);
        }
        else if (dfa == 4)
        {
            state4(str[i]);
        }
        else
        {
            return -1;
        }
    }

    if (dfa == 4)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    printf("\n\t***** LEXICAL ANALYZER *****\n\n");

    char ch, word[30], count = 0;
    FILE *fp;
    int i, j = 0;
    fp = fopen("program.txt", "r");
    if (fp == NULL)
    {
        printf("Error while opening the file\n");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isoperator(ch))
        {
            printf("\t\t%c is operator\n", ch);
            count++;
        }
        else if (isdelimiter(ch))
        {
            printf("\t\t%c is delimiter\n", ch);
            count++;
        }
        else if (isalnum(ch))
        {
            word[j++] = ch;
        }
        else if ((ch == ' ' || ch == '\n' || ch == '(' || ch==')'|| ch=='=' ) && (j != 0))
        {
            word[j] = '\0';
            j = 0;

            if (iskeyword(word))
            {
                printf("\t\t%s is keyword\n", word);
                count++;
            }
            else if (isidentifier(word))
            {
                printf("\t\t%s is indentifier\n", word);
                count++;
            }
            else if (isinteger(word))
            {
                printf("\t\t%s is Integer\n", word);
                count++;
            }
            else if (isdecimal(word))
            {
                printf("\t\t%s is Real Number\n", word);
                count++;
            }
        }
    }
    printf("\n\t**  Number of Valid Tokens are %d  **", count);
    fclose(fp);
}

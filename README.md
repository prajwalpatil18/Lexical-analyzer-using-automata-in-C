Abstract—
The word lexical in lexical analysis, its 
meaning is extracted from the word “lexeme”. Lexeme 
is an abstract unit of morphological analysis in 
linguistics. A lexical analyzer is used in various 
applications like text editors, information retrieval 
system, pattern recognition programs and language 
compilers. But we limit our discussion in this paper to 
language compilers. Lexical analyzer being the first 
phase of the compilation process it deals with the 
processing of input language.

Keywords—
lexeme, compiler, Finite Automata, 
Regular Expression, tokenization.

I. INTRODUCTION 

Lexical analysis is the first part of the compiler
designing. Lexical analyzer is a program that breaks 
down the source code into a sequence of lexemes. A 
lexeme is a single sequence of characters like string, 
number, etc. Lexical analyzer reads the input and 
recognizes the lexemes and output a sequence of 
token describing the lexemes. The main task of the 
lexical analysis is to read input characters and 
produce a token. A token is an object which 
describes a lexeme. Token has a “type” and a 
“value”. The token also includes the information of 
line number and column number. In other words, the 
token is a sequence of characters that can be treated 
as a unit in the code of programming language.

II. IMPLEMENTATION DETAILS

Our project Lexical analyzer is very useful in the 
compiler design. First of all see what is lexical 
analyzer so it id the first step of compiler which 
converts high machine language code to the 
sequence of tokens and passes the legal tokens to the 
syntax analyzer which analyze the syntax and 
compile the code. So, we have created this lexical 
analyzer in C language. Constructing various DFAs 
for different kinds of string as input such as 
keyword, identifier , operator , comments etc. Then 
we have implemented the DFAs into the code where 
using various states we have determine whether a 
string is keyword or identifier or integer. We have 
read the code from the text file by reading one one 
charecter from file and making the string and 
determining type of token whether a legal token or 
illegal token.


III. LITERATURE REVIEW

Daniele Paolo Scarpazza et al. [19] To optimize 
Flex's original kernel to run on each of the eight IBM 
cell processor Synergetic Processing Elements. 
Proposed an algorithm for parallel regexp-based 
tokenization that exploits the large amount of 
thread-level and data-level parallelism available in 
multi-cores framework. It is based on the 
Deterministic Finite Automation (DFA) model 
designed for predicationlike branch removal and 
SIMDization. Umarani Srikanth [26] To model 
framework for concurrent execution of lexical 
analyser tasks for cell processor. Proposed method 
based on dividing the source program into fixed set 
of blocks using dynamic block splitting algorithm 
for performing lexical analysis in parallel. 
Tokenization is performed by using the AhoCorasick algorithm to search for a string in multicore 
IBM Cell processors at high speed against large 
dictionaries. Swagat Kumar Jena et al. [21] To 
develop parallel lexical analyzer for C language. The 
method is to break the source file into N blocks 
where each block contains M lines with the 
exception of the last block and store each block in 
memory in terms of files and build N lexical 
program threads and perform lexical analysis in 
parallel for each file (say fi); where: N = Total 
number of cores available Amit Barve et al. [9] To 
implement lexical analyzer to run in parallel on 
multi-core machines. The method based on an open 
source automatic lexer generator Flex and exploiting 
the concept of processor affinity and partitioning 
code written in C/C++ programming language based 
on for-loop looping structures Amit Barve et al. [24] 
To implement lexical analyzer to run in parallel on 
multi-core machines using divide and conquer 
algorithm design paradigm. Approach is based on 
dividing the source code into a fixed number of 
blocks equal to the number of available CPUs by 
specifying the pivot positions. White space 
character, various constructs and lines-based pivot 
elements were considered. Amit Barve et al. [15] To 
implement fast parallel lexer for multi-core 
machines. Modified version of the algorithm given 
by Amit Barve et al. [9, 24]. An algorithm is 
proposed to record block markers of source code 
into a text file which will be read later and based on 
read markers, processes are forked and Electronic 
copy available using processor affinity processes are 
allocated to different CPUs and algorithm efficiency 
is improved by assigning processes to a free 
processor as and when a process is generated. This 
method avoids waiting time for a process to be 
allocated to a processor.
IV. RESULTS AND DISCUSSION
In the system you can by typing our code can 
perform tokenization on our code. So, our project 
will determine whether in the code which string is 
keyword or identifier or the operator.

V. CONCLUSION AND FUTURE SCOPE

From the detailed analysis of lexical analyzer 
implementation studies, we can focus on RQS4. 
RQS4: What are the challenging issues and needs
in the implementation of lexical analyzer? 
The development of computing power is moving 
rapidly towards massive multi-core platform due to 
its power and performance benefits. In order to 
exploit the maximum capabilities of multi - core 
technologies, system software such as compilers 
should be engineered for parallel processing. The 
sophisticated framework has to be designed for 
parallel execution of lexical analysis tasks by 
adopting algorithm design paradigm best suited for 
parallel computing and CPU scheduling strategies 
for efficient utilization of processors in multi-core 
system. Thus, the experimental results of the 
proposed tokenizer show substantial progress in 
performance in the lexical analysis phase 
engineered with parallel processing compared to 
the conventional sequential version of the lexical 
analysis in terms of compilation time and also 
affect the time and space requirements of the DFA 
based parallel pattern matcher simulator.

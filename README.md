# alx-low_level_programming
# 0x00. C - Hello, World:
    For this project, we look at this concept: C programming.
## Learning Objectives:
    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
## General:
    Why C programming is awesome

    Who invented C

    Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds

    What happens when you type gcc main.c

    What is an entry point

    What is main

    How to print text using printf, puts and putchar

    How to get the size of a specific type using the unary operator sizeof

    How to compile using gcc

    What is the default program name when compiling with gcc

    What is the official C coding style and how to check your code with betty-style

    How to find the right header to include in your source code when using a standard library function

    How does the main function influence the return value of the program

## Resources
#### Read or watch:

    Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first)

    Dennis Ritchie

    āCā Programming Language: Brian Kernighan

    Why C Programming Is Awesome

    Learning to program in C part 1

    Learning to program in C part 2

    Understanding C program Compilation Process

    Betty Coding Style

    Hash-bang under the hood (Look at only after you finish consuming the other resources)

    Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)

#### man or help:

    gcc

    printf (3)

    puts

    putchar


## Requirements
### C
    Allowed editors: vi, vim, emacs

    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

    All your files should end with a new line

    A README.md file at the root of the repo, containing a description of the repository

    A README.md file, at the root of the folder of this project, containing a description of the project

    There should be no errors and no warnings during compilation

    You are not allowed to use system

    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

    Shell Scripts

    Allowed editors: vi, vim, emacs

    All your scripts will be tested on Ubuntu 20.04 LTS

    All your scripts should be exactly two lines long ($ wc -l file should print 2)

    All your files should end with a new line

    The first line of all your files should be exactly #!/bin/bash

## Shell Scripts
    Allowed editors: vi, vim, emacs

    All your scripts will be tested on Ubuntu 20.04 LTS

    All your scripts should be exactly two lines long ($ wc -l file should print 2)

    All your files should end with a new line

    The first line of all your files should be exactly #!/bin/bash

## More Info
### Betty linter
#### To run the Betty linter just with command betty <filename>:

Go to the Betty repository

Clone the repo to your local machine

cd into the Betty directory

Install the linter with sudo ./install.sh

emacs or vi a new file called betty, and copy the script below: 

    #!/bin/bash
    # Simply a wrapper script to keep you from having to use betty-style
    # and betty-doc separately on every item.
    # Originally by Tim Britton (@wintermanc3r), multiargument added by
    # Larry Madeo (@hillmonkey)

    BIN_PATH="/usr/local/bin"
    BETTY_STYLE="betty-style"
    BETTY_DOC="betty-doc"

    if [ "$#" = "0" ]; then
        echo "No arguments passed."
        exit 1
    fi

    for argument in "$@" ; do
        echo -e "\n========== $argument =========="
        ${BIN_PATH}/${BETTY_STYLE} "$argument"
        ${BIN_PATH}/${BETTY_DOC} "$argument"
    done
  
Once saved, exit file and change permissions to apply to all users with chmod a+x betty

Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/

You can now type betty <filename> to run the Betty linter!



# 0x01. C - Variables, if, else, while:
## Resources
#### Read or watch:

    Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: ācommentsā, āData types | Integer typesā, āDeclarationā, āCharactersā, āArithmetic operatorsā, āVariables assignmentsā, āComparisonsā, āLogical operatorsā, āif, ifā¦elseā, āwhile loopsā.)

    Keywords and identifiers

    integers

    Arithmetic Operators in C

    If statements in C

    ifā¦else statement

    Relational operators

    Logical operators

    while loop in C

    While loop

    #### man or help:

    ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

    What are the arithmetic operators and how to use them

    What are the logical operators (sometimes called boolean operators) and how to use them

    What the the relational operators and how to use them

    What values are considered TRUE and FALSE in C

    What are the boolean operators and how to use them

    How to use the if, if ... else statements

    How to use comments

    How to declare variables of types char, int, unsigned int

    How to assign values to variables

    How to print the values of variables of type char, int, unsigned int with printf

    How to use the while loop

    How to use variables with the while loop

    How to print variables using printf

    What is the ASCII character set

    What are the purpose of the gcc flags -m32 and -m64

#### Copyright - Plagiarism
    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

    You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

    You are not allowed to publish any content of this project.

    Any form of plagiarism is strictly forbidden and will result in removal from the program.
## Requirements:
### General:
    Allowed editors: vi, vim, emacs

    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

    All your files should end with a new line

    A README.md file, at the root of the folder of the project

    There should be no errors and no warnings during compilation

    You are not allowed to use system

    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


    
# 0x02. C - Functions, nested loops

## Resources Read or watch:

    Nested while loops (https://alx-intranet.hbtn.io/rltoken/_4aLZ5nW24njUT2VbSZdQQ)

    C - Functions (https://alx-intranet.hbtn.io/rltoken/Vg1zzzrxLhPh71405uggSg)

    Learning to Program in C (Part 06) (stop at 14:00) (https://alx-intranet.hbtn.io/rltoken/jveXtnJII2S0z7a06c7-JA)

    What is the purpose of a function prototype? (https://alx-intranet.hbtn.io/rltoken/XZ--UJZO76ZoUWNA9bTmbg)

    C - Header Files (stop before the āOnce-Only Headersā paragraph) (https://alx-intranet.hbtn.io/rltoken/AS8JW4ObD5gmyX2mgtqV0A)
    
## Learning Objectives: 
    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
    What are nested loops and how to use them 

    What is a function and how do you use functions 

    What is the difference between a declaration and a definition of a function 

    What is a prototype Scope of variables What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89 

    What are header files and how to to use them with #include 

## Requirements:
## General:
    Allowed editors: vi, vim, emacs 

    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 

    All your files should end with a new line 

    A README.md file, at the root of the folder of the project is mandatory 

    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 

    You are not allowed to use global variables 

    No more than 5 functions per file 

    You are not allowed to use the standard library. Any use of functions like printf, puts, etcā¦ is forbidden 

    You are allowed to use _putchar 

    You donāt have to push _putchar.c, we will use our file. If you do it wonāt be taken into account 

    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you donāt have to push them to your repo (if you do we wonāt take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples 

    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h 

    Donāt forget to push your header file 

## Copyright - Plagiarism 
    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives. 

    You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

    You are not allowed to publish any content of this project. 

    Any form of plagiarism is strictly forbidden and will result in removal from the program. 
    
## More Info 
    You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

    
    
# 0x03. C - Debugging

## Resources:

## Read or watch:

        Debugging (https://alx-intranet.hbtn.io/rltoken/faGcpiJiejHH6GhqpmbhUw)

        Rubber Duck Debugging (https://alx-intranet.hbtn.io/rltoken/RaecqJBNkmZ92vLMpNDuGg)
    
        Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, itās important to understand the concepts and processes of debugging manually.


### Learning Objectives:
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General:
        What is debugging

        What are some methods of debugging manually

        How to read the error messages

### Copyright - Plagiarism:
    
        You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

        You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

        You are not allowed to publish any content of this project.

        Any form of plagiarism is strictly forbidden and will result in removal from the program.

### Requirements:
#### General:
        Allowed editors: vi, vim, emacs

        All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

        All your files should end with a new line

        Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

        A README.md file at the root of the repo, containing a description of the repository

        A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about

    
    
# 0x04. C - More functions, more nested loops

## Resources

### Read or watch:
    
    Nested while loops (https://alx-intranet.hbtn.io/rltoken/aDRkFzUkVysnD94Dpm3w5g)

    C - Functions (https://alx-intranet.hbtn.io/rltoken/zf4IZeoe0yFZL2X7_nznQQ)

    Learning to Program in C (Part 06) (stop at 14:00) (https://alx-intranet.hbtn.io/rltoken/iQ87CI4Lf41U_uRh9QsoQA)

    What is the purpose of a function prototype? (https://alx-intranet.hbtn.io/rltoken/pUXhvD6-xl5BbWyj1AhCEA)

    C - Header Files (stop before the āOnce-Only Headersā paragraph) (https://alx-intranet.hbtn.io/rltoken/IFY075ffrszSJvHqPAa-zQ)

## Learning Objectives:

    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General:

    What are nested loops and how to use them

    What is a function and how do you use functions

    What is the difference between a declaration and a definition of a function

    What is a prototype

    Scope of variables

    What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89

    What are header files and how to to use them with #include

## Copyright - Plagiarism

    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

    You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

    You are not allowed to publish any content of this project.

    Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General

    Allowed editors: vi, vim, emacs

    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

    All your files should end with a new line

    A README.md file, at the root of the folder of the project is mandatory

    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

    You are not allowed to use global variables

    No more than 5 functions per file

    You are not allowed to use the standard library. Any use of functions like printf, puts, etcā¦ is forbidden

    You are allowed to use _putchar

    You donāt have to push _putchar.c, we will use our file. If you do it wonāt be taken into account

    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you donāt have to push them to your repo (if you do we wonāt take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

    Donāt forget to push your header file

More Info
    You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.
    
    
    
# 0x05. C - Pointers, arrays and strings

## Concepts
        For this project, we expect you to look at these concepts:

        Pointers and arrays(https://alx-intranet.hbtn.io/concepts/60)

        Data Structures(https://alx-intranet.hbtn.io/concepts/120)


## Resources
    ### Read or watch:

        C - Arrays(https://alx-intranet.hbtn.io/rltoken/PVi2XMuApOK3jfhsoqsyXw)

        C - Pointers(https://alx-intranet.hbtn.io/rltoken/oyHybzYBeFiLUMALpb_usA)

        C - Strings(https://alx-intranet.hbtn.io/rltoken/sUeh9qDyW9pePOfJIpx_Bw)

        Memory Layout(https://alx-intranet.hbtn.io/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ)

## Learning Objectives
    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General:
        What are pointers and how to use them

        What are arrays and how to use them

        What are the differences between pointers and arrays

        How to use strings and how to manipulate them

        Scope of variables

### Copyright - Plagiarism

        You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

        You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

        You are not allowed to publish any content of this project.

        Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements:
### General:

        Allowed editors: vi, vim, emacs

        All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

        All your files should end with a new line

        A README.md file, at the root of the folder of the project is mandatory

        Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

        You are not allowed to use global variables

        No more than 5 functions per file

        You are not allowed to use the standard library. Any use of functions like printf, puts, etcā¦ is forbidden

        You are allowed to use _putchar

        You donāt have to push _putchar.c, we will use our file. If you do it wonāt be taken into account

        In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you donāt have to push them to your repo (if you do we wonāt take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

        The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

        Donāt forget to push your header file

### More Info:
        You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.


    
# 0x06. C - More pointers, arrays and strings

## Learning Objectives
    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General:
        What are pointers and how to use them

        What are arrays and how to use them

        What are the differences between pointers and arrays

        How to use strings and how to manipulate them

        Scope of variables

## Copyright - Plagiarism
    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

    You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

    You are not allowed to publish any content of this project.

    Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements:
    ### General:
        Allowed editors: vi, vim, emacs

        All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

        All your files should end with a new line

        A README.md file, at the root of the folder of the project is mandatory

        Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

        You are not allowed to use global variables

        No more than 5 functions per file

        You are not allowed to use the standard library. Any use of functions like printf, puts, etcā¦ is forbidden

        You are allowed to use _putchar

        You donāt have to push _putchar.c, we will use our file. If you do it wonāt be taken into account

        In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you donāt have to push them to your repo (if you do we wonāt take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

        The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

        Donāt forget to push your header file

    
# 0x0B. C - malloc, free
## Concepts
    For this project, we expect you to look at this concept:

    Automatic and dynamic allocation, malloc and free (https://alx-intranet.hbtn.io/concepts/62)

## Resources
Read or watch:

    0x0a - malloc & free - quick overview.pdf (https://alx-intranet.hbtn.io/rltoken/7q6RmWq86XkUhvmlhrg9bg)

    Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50) (https://alx-intranet.hbtn.io/rltoken/pfGb2oVIYLO_1a8jtFGQYw)
    
man or help:

    malloc

    free
    
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
    
    What is the difference between automatic and dynamic allocation

    What is malloc and free and how to use them

    Why and when use malloc

    How to use valgrind to check for memory leak

## Copyright - Plagiarism
    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

    You will not be able to meet the objectives of this or any following project by copying and pasting someone elseās work.

    You are not allowed to publish any content of this project.

    Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General
    Allowed editors: vi, vim, emacs

    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

    All your files should end with a new line

    A README.md file, at the root of the folder of the project is mandatory

    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

    You are not allowed to use global variables

    No more than 5 functions per file

    The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etcā¦ is forbidden

    You are allowed to use _putchar

    You donāt have to push _putchar.c, we will use our file. If you do it wonāt be taken into account

    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you donāt have to push them to your repo (if you do we wonāt take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

    Donāt forget to push your header file

## More Info
    You do not have to learn about calloc and realloc.

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

“C” Programming Language: Brian Kernighan

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

Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)

Keywords and identifiers

integers
    
Arithmetic Operators in C
    
If statements in C

if…else statement

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

You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.

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

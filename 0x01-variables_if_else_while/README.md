# Tasks:
## 0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

You can find the source code here

The variable n will store a different value every time you will run this program

You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code

The output of the program should be:

The number, followed by

if the number is greater than 0: is positive

if the number is 0: is zero

if the number is less than 0: is negative

followed by a new line

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -520693284 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -973398895 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -199220452 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    561319348 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    561319348 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    266853958 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -48147767 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    0 is zero
    julien@ubuntu:~/0x01$ 

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 0-positive_or_negative.c

## 1. The last digit
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

You can find the source code here

The variable n will store a different value every time you run this program

You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code

The output of the program should be:

The string Last digit of, followed by

n, followed by

the string is, followed by

if the last digit of n is greater than 5: the string and is greater than 5

if the last digit of n is 0: the string and is 0

if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0

followed by a new line

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 629438752 is 2 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -748255693 is -3 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -1052791662 is -2 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -284805734 is -4 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -284805734 is -4 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 491506926 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 954249937 is 7 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 652334952 is 2 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -729688197 is -7 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -729688197 is -7 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 45528266 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 45528266 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 809065140 is 0 and is 0
    julien@ubuntu:~/0x01$

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 1-last_digit.c

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

All your code should be in the main function

You can only use putchar twice in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
    julien@ubuntu:~/0x01$ ./2-print_alphabet 
    abcdefghijklmnopqrstuvwxyz
    julien@ubuntu:~/0x01$

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 2-print_alphabet.c

## 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

All your code should be in the main function

You can only use putchar three times in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
    julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
    abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
    julien@ubuntu:~/0x01$ 

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 3-print_alphabets.c

## 4. When I was having that alphabet soup, I never thought that it would pay off

Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

All your code should be in the main function

You can only use putchar twice in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
    julien@ubuntu:~/0x01$ ./4-print_alphabt 
    abcdfghijklmnoprstuvwxyz
    julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
    julien@ubuntu:~/0x01$ 

Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 4-print_alphabt.c

## 5. Numbers

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
    julien@ubuntu:~/0x01$ ./5-print_numbers 
    0123456789
    julien@ubuntu:~/0x01$ 

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 5-print_numbers.c

## 6. Numberz

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

You are not allowed to use any variable of type char

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

You can only use putchar twice in your code

All your code should be in the main function

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
    julien@ubuntu:~/0x01$ ./6-print_numberz 
    0123456789
    julien@ubuntu:~/0x01$ 

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 6-print_numberz.c

## 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

All your code should be in the main function

You can only use putchar twice in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
    julien@ubuntu:~/0x01$ ./7-print_tebahpla
    zyxwvutsrqponmlkjihgfedcba
    julien@ubuntu:~/0x01$

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 7-print_tebahpla.c

## 8. Hexadecimal
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

All your code should be in the main function

You can only use putchar three times in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
    julien@ubuntu:~/0x01$ ./8-print_base16
    0123456789abcdef
    julien@ubuntu:~/0x01$

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 8-print_base16.c

## 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space

Numbers should be printed in ascending order

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

All your code should be in the main function

You can only use putchar four times maximum in your code

You are not allowed to use any variable of type char

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
    julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
    julien@ubuntu:~/0x01$ 

### Repo:

GitHub repository: alx-low_level_programming

Directory: 0x01-variables_if_else_while

File: 9-print_comb.c

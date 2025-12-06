The start of Hello world in C language

# 0. Preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.


- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

## cat main.c 


#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}

# 1. Compiler

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.

-- Example: if the C file is main.c, the output file should be main.o


# 2. Assembler

Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.

            - Example: if the C file is main.c, the output file should be main.s

# 3. Name

Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

# 4. Hello, puts 

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

### Test

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out


# 5. Hello, printf

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

### Test

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c


# 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

### Test 
    gcc 6-size.c -m32 -o size32 2> /tmp/32
    gcc 6-size.c -m64 -o size64 2> /tmp/64


# 7. Intel

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c.

     -- Example: if the C file is main.c, the output file should be main.s

### Testing

export CFILE=main.c

cat main.c

    #include <stdio.h>

    /**
    * main - Entry point
    *
    * Return: Always 0 (Success)
    */
    int main(void)
    {
        return (0);
    }
    julien@ubuntu:~/c/0x00$ ./100-intel 
    julien@ubuntu:~/c/0x00$ cat main.s
        .file   "main.c"
        .intel_syntax noprefix
        .text
        .globl  main
        .type   main, @function
    main:
    .LFB0:
        .cfi_startproc
        push    rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        mov rbp, rsp
        .cfi_def_cfa_register 6
        mov eax, 0
        pop rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
    .LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
        .section    .note.GNU-stack,"",@progbits 


# 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity 


Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option

### Testing
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c

### Resources

    https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20251206%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20251206T135955Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=3fa93aa937eb70ce379d8089e9a61bd6896b687878ba9e4183f26dc514c2f02f 

    https://en.wikipedia.org/wiki/Dennis_Ritchie 

    https://www.youtube.com/watch?v=de2Hsvxaf8M 

    https://www.youtube.com/watch?v=smGalmxPVYc 

    https://www.youtube.com/watch?v=rk2fK2IIiiQ 

    https://www.youtube.com/watch?v=FwpP_MsZWnU 

    https://www.youtube.com/watch?v=VDslRumKvRA 

    https://github.com/alx-tools/Betty/wiki 

    https://x.com/unix_byte/status/1024147947393495040?s=21

    http://harmful.cat-v.org/software/c++/linus


### man or help:

    gcc
    printf (3)
    puts
    putchar

### Learning Objectives

- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

### Copyright - Plagiarism


- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

### Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project, containing a description of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

### Shell Scripts

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash


# MONTY INTERPRETER


A Monty Interpreter is a software program that run programs written in the Monty programming language. 
Monty is a simple programming language designed for educational purposes and is similar in syntax to Python.

Monty was created by Max E. Levchin, who was a Ukrainian-American entrepreneur and computer scientist. He first introduced the language in a blog post in August 2013.

The goal of this project is to create an interpreter for Monty ByteCode files, utilizing Stacks (LIFO) and Queues (FIFO).

## Quick Start

Monty:

Simply Compile: `$ gcc *.c -o monty`

Then Run: `$ ./monty filename.m`

## Commands Overview

 Monty Interpreter will tokenize command inputs, ignoring whitespaces and comments which start with a # sign. When tokenizing, the interpreter only looks at the first 2 inputs per line.

 Potential failures and their messages will be mentioned for each operation.

* __USAGE:__ Monty file # If given no file or too many arguments.
* __Error:__ Can't open file # If given invalid file.
* __Error:__ Unknown instruction # If unknown operation given.
* __Error:__ Malloc failed # if malloc fails.

There are 2 valid operation codes;

1.push

Push only valid integers into the doubly linked list. Defaults to a Stack LIFO status.

Given:

```
$ cat test.m
push 1
push 2
pall

```
Expected:

```
$ ./monty test.m
2
1

```
Failurs:

* __Error:__ usage: push integer # if no argument given or invalid argument.

2.pall

  Print the values within the linked list



















## Authors

* Alejandro Martinez [Git Hub](https://github.com/alemao51092)
* Emanuel Trias [Git Hub](https://github.com/KrasniKot)
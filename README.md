# Monty - A Stack-Based Programming Language

![](https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png)

Welcome to Monty, a simple and powerful stack-based programming language! This repository contains the implementation of Monty, which can process Monty bytecode files.

## Project Details

- **Project Name:** Monty
- **Type:** Group Project
- **Category:** Algorithm and Data Structure
- **Authors:** Wanyoike Edwards, Whitney Oduor
- **Weight:** 2
- **Project Duration:** Oct 17, 2023, 6:00 AM - Oct 20, 2023, 6:00 AM
- **Checker Release:** Oct 18, 2023, 12:00 AM
- **Auto Review:** Will be launched at the deadline

## Learning Objectives

By the end of this project, you are expected to understand and be able to explain:

**General**
- What LIFO and FIFO mean
- What a stack is and when to use it
- What a queue is and when to use it
- Common implementations of stacks and queues
- Common use cases of stacks and queues
- The proper way to use global variables

## Copyright and Plagiarism

Please note that plagiarism is strictly forbidden. You are expected to come up with solutions to the tasks independently. Publishing any content from this project is not allowed.

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You allowed to use a maximum of one global variable
-   No more than 5 functions per file
-   You are allowed to use the C standard library
-   The prototypes of all your functions should be included in your header file called `monty.h`
-   Don't forget to push your header file
-   All your header files should be include guarded
-   You are expected to do the tasks in the order shown in the project

## Compilation & Output

Your code will be compiled as follows:
```shell
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
- Any output must be printed to stdout
- Any error message must be printed to stderr

## Monty Byte Code Files

Monty byte code files have a .m extension and contain a series of instructions. Each instruction is on a separate line. There can be any number of spaces before or after the opcode and its argument.

Example:
```
push 0
push 1
push 2
  push 3
pall
push 4
  push 5
    push    6
pall
```

Monty byte code files can contain blank lines (empty or made of spaces only). Any additional text after the opcode or its required argument is not taken into account.

## Tasks

This project consists of several tasks, including implementing the following opcodes:

- `push` and `pall`
- `pint`
- `pop`
- `swap`
- `add`
- `nop`
- `sub` (Advanced)
- `div` (Advanced)
- `mul` (Advanced)
- `mod` (Advanced)
- Comments (Advanced)
- `pchar` (Advanced)
- `pstr` (Advanced)
- `rotl` (Advanced)
- `rotr` (Advanced)
- `stack` and `queue` (Advanced)
- Brainf*ck (Advanced)
- Add two digits (Advanced)
- Multiplication (Advanced)
- Multiplication level up (Advanced)

## Installation and Usage

To use the Monty interpreter, follow these steps:

1. Clone the Monty repository to your local machine.
2. Compile the Monty source code using the provided compilation command.
3. Create a Monty byte code file with your instructions (e.g., `myprogram.m`).
4. Execute your Monty program with the following command:

```shell
$ ./monty myprogram.m
```

Ensure that you have the necessary permissions to execute the script. You can create Monty byte code files and test the interpreter with various instructions.

## Contributing

Feel free to contribute to the Monty project by submitting pull requests, reporting issues, or improving the documentation. We encourage collaboration and appreciate your support in making Monty even better.

## License

This project is licensed under the ALX License - see the [LICENSE](LICENSE) file for details.

Enjoy your journey with Monty, and happy coding!

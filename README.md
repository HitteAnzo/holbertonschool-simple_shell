

![Holberton](https://ml.globenewswire.com/Resource/Download/a08e6c28-55be-44c8-8461-03544f094b38)

# Simple Shell

## Description

**Simple Shell** is a basic UNIX command interpreter written in C. This project is a part of the curriculum of the [Holberton School](https://www.holbertonschool.com/) and serves as an introduction to the concepts of system calls, processes, and the implementation of a simple shell in a UNIX-like environment.

## Features

- Basic command execution (with arguments)
- Handle built-in commands: `exit`, `env`, ,etc..
- Input redirection and command pipelines
- Custom environment management
- Interactive and non-interactive modes

## Getting Started

### Prerequisites

To compile and run this shell, you need:

- A UNIX-like operating system (Linux, macOS, etc.)
- GCC compiler

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/HitteAnzo/holbertonschool-simple_shell.git
   ```

2. Navigate to the project directory:

    ```bash
    cd holbertonschool-simple_shell
    ```

3. Compile the program:

    ```bash
    gcc -Wall -Werror -Wextra -pedantic *.c -o simple_shell
    ```

## Usage

You can run the shell in two modes:

### Interactive Mode
   ```bash
   ./simple_shell
   ```

You should see a prompt where you can type commands:

   ```sh
   $ ./simple_shell
   $ ls -l
   total 48
   -rw-r--r-- 1 user user  1373 Aug 20 10:10 README.md
   -rwxr-xr-x 1 user user 14832 Aug 20 10:10 simple_shell
   ```

### Non-Interactive Mode

In this mode, the shell reads commands from a file or pipe.

   ```bash
   echo "ls -l" | ./simple_shell
   ```

### Built-in Commands

The following built-in commands are supported:

- `exit` [status]: Exit the shell with an optional status.
- `env`: Display the current environment variables.

### Exemple

   ```bash
   $ ./simple_shell
   $ pwd
   /home/user/holbertonschool-simple_shell
   $ exit
   ```

### Files

- `main.c`: Entry point of the shell program.
- `shell.c`: Core functions of the shell.
- `builtin.c`: Implementation of built-in commands.
- `env.c`: Functions related to environment variable management.
- `parser.c`: Command line parsing and execution.
- `README.md`: This file.
- `man_1_simple_shell`: Manual file for the shell.

### Use man in the shell

- Save the above content to a file named simple_shell.1.
- Install the man page using the following command (requires superuser privileges):

    ```bash
    sudo cp simple_shell.1 /usr/share/man/man1/
    sudo mandb
    ```

- View the man page with:

    ```bash
    man simple_shell
    ```

## Contributing

If you would like to contribute to this project, please open an issue or submit a pull request.

## Author 

- **Anzo Hitte** - [HitteAnzo](https://github.com/HitteAnzo)

## Acknowledgements

- **[Holberton School](https://www.holbertonschool.com/)** - For providing the guidance, support, and resources that made this project possible.
- **Marsala Lucas** - [LucasMarsala](https://github.com/LucasMarsala)
- **Chatillon Jordan** - [JordanHolberton](https://github.com/JordanHolberton)

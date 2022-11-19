/***************	INTRODUCTION	***************************
                                                                  *
                                                                  *
								  *
*******************************************************************/

		ALX SOFTWARE ENGINEERING SCHOOL




This README file shows the project was being made as well as the processes,
function prototypes and more.

PREQUISITES:

access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)

Compilation
Your shell will be compiled this way:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


Testing
Your shell should work like this in interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$


But also in non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$


Output:

Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
Example of error with sh:

$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$


Same error with your program hsh:

$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$


Requirements:


General:


Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
Write a README with the description of your project
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker



HOW THE SHELL WORKS:


Components of a Linux Shell (BY Mohammed Islam GNU/LINUX system administrator and programmer)

The shell is a complex piece of software that contains many different parts.

The core part of any Linux shell is the Command Line Interpreter, or CLI. This part serves two purposes: it reads and parses user commands, then it executes the parsed commands. You can think of the CLI itself as having two parts: a parser (or front-end), and an executor (or back-end).

The parser scans input and breaks it down to tokens. A token consists of one or more characters (letters, digits, symbols), and represents a single unit of input. For example, a token can be a variable name, a keyword, a number, or an arithmetic operator.

The parser takes these tokens, groups them together, and creates a special structure we call the Abstract Syntax Tree, or AST. You can think of the AST as a high level representation of the command line you gave to the shell. The parser takes the AST and passes it to the executor, which reads the AST and executes the parsed command.

Another part of the shell is the user interface, which usually operates when the shell is in the interactive mode, for example, when you are entering commands at the shell prompt. Here the shell runs in a loop, which we know as the Read-Eval-Print-Loop, or REPL.

As the loop's name indicates, the shell reads input, parses and executes it, then loops to read the next command, and so on until you enter a command such as exit , shutdown, or reboot.


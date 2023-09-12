# introduction to libft(library of functions)
- in this project we will be creating functions that can be used later in any of our c projects,some of them are already included in c standard libraries and some of them are a bit different.
by we creating our own library function we get to understand deeply how main functions are working behind the scenes therefore we get a better understanding of the way that c language works.
# the file structure for this project will be as following:

### .c files 
- where all our c functions will be written in
### .h (header file)
- the header file is important to provide access to various functions from any file that the header is included in,that means we will not over write the function that we want to use in every file that doesn't include that specific function.
- we can include all the headers that we will be using in our program in the .h file instead of including them in every file that our program has.

in this project the header file is going to have "libft.h" name, so make sure to include it in the c files in this way `#include "libft.h"`.

### makefile
- A Makefile is a special file used in software development that contains a set of rules and dependencies to automate the build process of a program, ensuring that files are compiled in the correct order.

in summary the makefile is going do:
- compiling: it compiles all the files in our program at once.
- cleaning:by running the "make clean" command, the make file will delete the object files, by running the "make fclean" command,the make file will delete the object files alongside the execuable file for our program.

this some of the things that the make file does , i will not be going to talk about it in detail,
dont forget to make a Research about it for farther understanding of it.

# libft functions

## mandatory part:

### functions from <ctype.h>
- [`ft_isalpha`](ft_isalpha.c) - checks for an alphabetical characters.
- [`ft_isdigit`](ft_isdigit.c) - checks for digits (0-9).
- [`ft_isalnum`](ft_isalnum.c) - checks for alphanumeric characters.
- [`ft_isascii`](ft_isascii.c) - checks whether a specific character fits into the ASCİİ character set.














# Get_next_line
"Reading a line from a fd is too boring"

![image](https://github.com/ismaelucky342/get_next_line/assets/153450550/4535fcaa-51f4-44cc-9235-37e889656f83)

This project is about programming a function that returns a line read from a file descriptor.
This project will not only allow you to add a very convenient function to your collection, but it will also make you learn a highly interesting new concept in C programming: static variables.
Whether it's a file, input, or even a network connection, you'll always have to read the content line by line. It's time to start working on this feature, which will be essential in your future projects.

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

## 📋 Testing

You only have to edit the get_next_line.c file and uncomment the main function and headers inside it.
You can edit test.txt files to put another text if you wish to test othe cases.
Then simply run this command (change "xx" with desired buffer size) :

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
```

-born2code


![image](https://github.com/ismaelucky342/ft_printf/assets/153450550/0ab002b6-139e-4b74-b2f9-931ae794fb68)

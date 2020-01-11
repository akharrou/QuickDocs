
#include <stdio.h>

char *ft_strrev(char *str)
{
	char c;
	int count;
	int i;

	count = 0;
	i = 0;
	c='\0';
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	count--;
	while (i < count)
	{
		c  = str[count];
		str[count] = str[i]; // the computer tried to change the data here,
		/// so the computer gives you a BUS ERROR and crashes
		/// because you tried doing something that is illegal:
		/// changing memory that you are not allowed.
		str[i] = c;
		count--;
		i++;
	}
	return (str);
}

// #include <string.h>


// int main()
// {
// 	char *r;
// 	r = "reem";  // <<--- this string NON-MODIFABLE, long story
// // the soluton is to make a modiable string, your code works fine.
// 	r = ft_strrev(r);
// 	printf("%p",r );
// }


#include <string.h>

int main()
{
	printf("%s", ft_strrev(strdup("reem")));  // strdup makes a new
		// string that is modifiable, youll understand later, its
		// too complicated to explain now.
}


/*
Compile with these flags (very important):

	"-g" and
	"-O0"   (capital letter /Oh/ 'O' , followd by digit /zero/ '0' )

Dont forget the "-fsanitize" flags, they dont affect lldb but are still useful for initial diagnostic messages.
thx fsanitize

 */

/* LLDB -- HOW TO USE


INFO:
-----------------------------------
> Blue line indicates the current line to be executed.

> Notice you can see and track your variables as your program runs, and see if something changes unexpectedly, and know at what line it did. Very useful.


BASIC NAVIGATION:
-----------------------------------
Go to execute line, and go to next one     ::  press 'n'
Step in a function      ::  press 's'
Step out of a function  ::  press 'o'
For help                ::  press 'h'


get out of GUI Mode         ::  press 'esc'
stop execution of program   ::  press 'kill'
quit `lldb` debugger        ::  press 'exit' or 'quit




TO GO STRAIGHT TO A LINE:
-----------------------------------
Go straight to a specific line, by bring the line indicator to that line with up and down arrows. Then press 'enter'. You will execute everything before it and land on that line.


 */



// it froze, because it crashed , now we know exactly where the problem is, and have to figure out why and how to fix it. but you did half the work by finding it exactly where, and probably have a clue as to why.

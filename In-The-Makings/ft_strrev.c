
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

// int main()
// {
// 	char *r;
// 	r = "reem";  // <<--- this string NON-MODIFABLE, long story
// // the soluton is to make a modiable string, your code works fine.
// 	r = ft_strrev(r);
// 	printf("%p",r );
// }


int main()
{
	printf("%s", ft_strrev("reem")); // this creates a new string
	  						// that is modifable
}

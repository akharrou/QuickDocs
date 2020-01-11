



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
		str[count] = str[i];
		str[i] = c;
		count--;
		i++;
	}
	return (str);
}

#include <stdlib.h>

int main()
{
	printf("%s", ft_strrev(strdup("reem")));
}

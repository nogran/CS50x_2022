#include <cs50.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	string	s;
	int	i;
	int	lenght;

	s = get_string("Input: ");
	lenght = strlen(s);
	printf("Output: ");
	for (i = 0; i < lenght; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

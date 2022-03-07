#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int	main(void)
{
	string	s;
	int	i;
	int	n;

	s = get_string("Before: ");
	printf("After: ");
	for (i = 0, n = strlen(s); i < n; i++)
	{
		if (islower(s[i]))
		{
			printf("%c", toupper(s[i]));
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}

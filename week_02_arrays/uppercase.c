#include <stdio.h>
#include <string.h>
#include <cs50.h>

int	main(void)
{
	string	s;
	int	i;
	int	n;

	s = get_string("Input: ");
	printf("After: ");
	for (i = 0, n = strlen(s); i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}

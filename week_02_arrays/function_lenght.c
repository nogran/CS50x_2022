#include <stdio.h>
#include <cs50.h>

int	string_lenght(string s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	string	input;
	int	lenght;

	input = get_string("Name: ");
	lenght = string_lenght(input);
	printf("%i\n", lenght);
}

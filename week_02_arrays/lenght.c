#include <stdio.h>
#include <cs50.h>

int	main(void)
{
	string	lenght;
	int		i;

	i = 0;
	lenght = get_string("Name: ");
	while (lenght[i] != '\0')
	{
		i++;
	}
	printf("%i\n", i);
}

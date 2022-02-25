#include <cs50.h>
#include <stdio.h>

int	main(void)
{
	char	c;

	c = get_char("Do you agree? ");
	if (c == 's' || c == 'S')
		printf("Agreed.\n");
	else if (c == 'n' || c == 'N')
		printf("Not agreed.\n");
}

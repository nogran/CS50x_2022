#include <stdio.h>
#include <cs50.h>
#include <string.h>

int	main(void)
{
	string	names[] = {"Bill", "Charlie", "Fred", "Georgie", "Ginny", "Percy", "Ron"};
	int	i;

	for (i = 0; i < 7; i++)
	{
		if (strcmp(names[i], "Hermione") == 0)
		{
			printf("Found\n");
			return (0);
		}
	}
	printf("Not found\n");
	return (1);
}

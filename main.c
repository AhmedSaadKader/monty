#include "monty.h"

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 if success, -1 otherwise
*/

int main(int ac, char **av)
{
	FILE *file;

	if (len(ac) != 2)
	{
		perror("Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", av[1]);
		exit(EXIT_FAILURE);
	}

}

#include "monty.h"

/**
 * main - opens a monty script file for parsing
 */
int main(int argc, char *argv[])
{
	FILE *fil;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fil = fopen(argv[1], "r");
	if (!fil)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	parsefile(fil);
	return (EXIT_SUCCESS);
}

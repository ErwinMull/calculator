#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (2 != argc) {
		fprintf(stderr, "Usage: %s \"<equation>\"\n", argv[0]);
		exit(1);
	}

	printf("Equation: %s\n", argv[1]);
	return 0;
}

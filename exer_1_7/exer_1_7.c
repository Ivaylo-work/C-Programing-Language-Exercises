#include <stdio.h>

/* copy input to output */
main()
{
	int c;
	printf("Result %d\n", getchar() != EOF);
	while ((c = getchar()) != EOF) {
		putchar(c);
		printf("\n");
		printf("EOF = %d\n",EOF);
	}
}

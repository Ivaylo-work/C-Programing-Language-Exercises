#include <stdio.h>

/* program to copy its input to its output, replacing each 
   string of one or more blanks by a single blank */
main()
{
	char c;
	char bl;
	while((c = getchar()) != EOF)
	{
		//putchar(c);
		if(c != ' ' || bl != ' ')
		{
			putchar(c);	
		}
		bl = c;
	}
}
#include <stdio.h>

/* count different types of symbols */
main()
{
	int c;
	int bl = 0;
	int tab = 0;
	int nl = 0;
	while((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
		else if (c == '\t')
		{
			++tab;
		}
		else if(c == ' ')
		{
			++bl;
		}
		printf("New Lines: %d\n", nl);
		printf("Tabs: %d\n", tab);
		printf("Blank Spaces: %d\n", bl);
		printf("\n");
	}
	
}
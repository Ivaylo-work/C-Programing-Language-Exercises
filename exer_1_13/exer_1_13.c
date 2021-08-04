#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, i, state, wLength, wCount;
	char s[1] = "|";
	int ndigit[10];

	wLength = wCount = 0;
	state = IN;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	
	while ((c = getchar()) != EOF) 
	{
		++wLength;
		if (c == ' ')
		{
			--wLength;
			ndigit[wCount] = wLength;
			++wCount;
			printf(" %d\n", wCount);
			state = OUT;
		}
		if (c == '\n' || c == '\t') 
		{
			--wLength;
			if(wLength == 0)
			{
				wCount = 0;
			} 
			else
			{
				ndigit[wCount] = wLength;
				++wCount;
			}
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			wLength = 0;
		}

	}

	printf("word length = %d\n", wLength);
	printf("number of words = %d\n", wCount);
	printf("word histogram:\n");
	printf("\n");
	for (i = 0; i < 10; ++i)
	{
		if(ndigit[i] > 0)
		{
			if(ndigit[i] == 1)
				printf("|\n");
			else if (ndigit[i] == 2)
				printf("||\n");
			else if (ndigit[i] == 3)
				printf("|||\n");
			else if (ndigit[i] == 4)
				printf("||||\n");
			else if (ndigit[i] == 5)
				printf("|||||\n");
			else if (ndigit[i] == 6)
				printf("||||||\n");
			else if (ndigit[i] == 7)
				printf("|||||||\n");
			else if (ndigit[i] == 8)
				printf("||||||||\n");
			else if (ndigit[i] == 9)
				printf("|||||||||\n");
			else if (ndigit[i] == 10)
				printf("||||||||||\n");
			else if (ndigit[i] == 11)
				printf("|||||||||||\n");
			
		}
		else
			printf(".\n");
	}
	return 0;
}
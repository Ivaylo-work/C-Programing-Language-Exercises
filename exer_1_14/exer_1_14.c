#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, i, lCount;
	char s[1] = "|";
	int ndigit[27];
	char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
	'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	lCount = 0;
	for (i = 0; i < 27; ++i)
	{
		ndigit[i] = 0;
		
	}
	while ((c = getchar()) != EOF) 
	{	
		for (i = 0; i < 27; ++i)
		{
			if (c == 'a' && alphabet[i] == 'a')
			{	
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'b' && alphabet[i] == 'b')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'c' && alphabet[i] == 'c')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'd' && alphabet[i] == 'd')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'e' && alphabet[i] == 'e')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'f' && alphabet[i] == 'f')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'g' && alphabet[i] == 'g')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'h' && alphabet[i] == 'h')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'i' && alphabet[i] == 'i')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'j' && alphabet[i] == 'j')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'k' && alphabet[i] == 'k')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'l' && alphabet[i] == 'l')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'm' && alphabet[i] == 'm')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'n' && alphabet[i] == 'n')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'o' && alphabet[i] == 'o')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'p' && alphabet[i] == 'p')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'q' && alphabet[i] == 'q')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'r' && alphabet[i] == 'r')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 's' && alphabet[i] == 's')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 't' && alphabet[i] == 't')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'u' && alphabet[i] == 'u')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'v' && alphabet[i] == 'v')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'w' && alphabet[i] == 'w')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'x' && alphabet[i] == 'x')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'y' && alphabet[i] == 'y')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
			else if (c == 'z' && alphabet[i] == 'z')
			{
				++lCount;
				ndigit[i] = ndigit[i] + lCount;
				lCount = 0;
			}
		}
	}	
	printf("letter histogram:\n");
	printf("\n");
	for (i = 0; i < 27; ++i)
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
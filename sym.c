#include <stdio.h>
int main()
{
	char sym;
	printf("Enter the sym\n");
	scanf("%c",&sym);
	
	do
	{		if (sym<='A' && sym >='Z')
		{
			printf("Enter right variable");
			scanf("%c",&sym);
		}
		
	}
	while (sym>='A' && sym<='Z');
	
		char low=sym+32;
		printf("%c is the lowercase",low);
	

	return 0;
}



#include <stdio.h>
int main()
{
	char sym;
	
	do
	{	scanf("%c",&sym);
		if (sym>='A' && sym <='Z')
		{
			sym=sym+32;
			
		}
	 else break;
	 printf("%c",sym);
		
	}
	while (sym>='A' && sym<='Z');
	
	return 0;
}



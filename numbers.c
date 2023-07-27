#include <stdio.h>
int main()
{
	const int N=10000;
	char array[N];
	int n;
	scanf("%d",&n);
	printf("enter the characters for array\n");
	for (int i=0; i < n; i++){
		scanf(" %c",&array[i]);
		}
	printf("The numbers are\n");
	for (int i=0; i < n; i++){
		if (array[i]>='0' && array[i] <= '9'){
			printf("%c" , array[i]);
		}
	}
	
			return 0;
}




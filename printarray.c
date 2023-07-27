#include <stdio.h>
int main()
{
	const int  N=1000;
	int array[N];
	printf("enter the numbers for array\n");
	
	for (int i=0;i<=N;i++){
		scanf("%d",&array[i]);
		printf("%d ",array[i]);
	}

	return 0;
}

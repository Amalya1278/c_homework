#include <stdio.h>
int main()
{
	const int N=1000;
	char array[N];
	int n;
	scanf("%d",&n);
	printf("enter the characters\n");
	int i=0;
    for (i=0;i<n;i++){
		scanf(" %c",&array[i]);
	
	}
	printf("Reversed array is\n");
	for( int j=n-1;j>=0;j--){
		printf("%c ",array[j]);
	}
	printf("\n");
	return 0;
}


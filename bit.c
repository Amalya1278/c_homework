#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int y=(x>>5)&1;
	printf("%d",y);
	if (y==1){
		printf("%d",x);
	}
    else if (y==0){
		x=x|(1<<5);
		printf("%d",x);
	}

	
	return 0;
}

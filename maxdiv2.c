#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	int max=1;
	int min;
	if (x<y && x<z){
		min=x;
	}
	else if(y<x && y<z){
		min=y;
	}
	else min=z;
	for (int i=min;i>=1;i--){
		if (x%i==0 && y%i==0 && z%i==0){
			max=i;
			break;
			}
	}
	printf("The biggest divisor of 3 number is %d",max);
	return 0;
}

	





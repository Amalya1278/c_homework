#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int y;
	scanf("%d",&y);
	int z;
	scanf("%d",&z);
	if (x==y){
		if (x>z){
			printf("%d is max", x);
		}
		else printf("%d is max",z);
	}
  else 	if (x==z){
		if (x>y){
			printf("%d is max",x);
		}
		else printf("%d is max",y);
	}
  else	if (y==z){
		if (x>y){
			printf("%d is max",x);
		}
		else printf("%d is max",y);
	}
	else printf("There are no equal numbers");
  

	return 0;
}

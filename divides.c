#include <stdio.h>
int main()
{
	int x;
	scanf("%d\n",&x);
	int y;
	scanf("%d",&y);
	if (x%y==0 || y%x==0)
		printf("True");
	else printf("False");
	return 0;
}

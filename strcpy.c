#include <stdio.h>
char strcpy1(char* arr1, char* arr2)
{
	while (*arr2!='\0'){
		*arr1=*arr2;
	     arr1++;
		 arr2++;
	}
	*arr1='\0';
}
int main() 
{
	char a[]="Amalya";
	char b[]="Elya";
	strcpy1(a,b);
	printf("%s",a);
	return 0;
}

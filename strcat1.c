#include <stdio.h>
char strcat1(char* arr, char* arr1){
	while (*arr!='\0'){   // tanenk verj
		arr++;
	}
	while(*arr1!='\0'){
		*arr=*arr1;
		arr++;
		arr1++;
	}
     *arr='\0';
}
int main()
{
	char a[]="Hello ";
	char b[]="World";
	strcat1(a,b);
	printf("%s",a);
	return 0;
}


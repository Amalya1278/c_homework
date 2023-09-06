#include <stdio.h>
int  strchr1(char* arr, char a)
{
	for (int i=0;arr[i]<='\0';i++){
		if (arr[i]==a){
			return *(arr+i);
		}
		
	}

}
int main()
{
	char a[]="Hello";
	char b='l';
   int c= strchr1(a,b);
	printf("%d",c);
return 0;
}
	

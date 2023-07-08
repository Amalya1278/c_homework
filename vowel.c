#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if (x>='a' && x<='z'){
		if (x=='a' || x=='u' || x=='e' || x=='o' || x=='i')
			printf("%c is vowel",x);
		else printf("%c is consonant",x);
	}
	else printf("enter a right variable");
	return 0;
}

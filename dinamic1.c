#include<stdio.h>
#include<stdlib.h>
int size=0;
int* ptr= (int*)malloc(sizeof(int));
void push_back(int n){
	int* temp=(int*)calloc(sizeof(int),size+1);
	for(int i=0;i<size;i++){
		temp[i]=ptr[i];
	}
	free(ptr);
	ptr=temp;
	temp=NULL;
	ptr[size]=n;
	++size;
}
int prime(int a){
	if(a==1 || a==0){
		return 0;
	}
	for(int i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
//	int size=0;
	int n;
	scanf("%d",&n);
   	for(int i=0;i<n;i++){
		if(prime(i)){
			push_back(i);
		}
	}
	for(int i=0;i<size;i++){
		printf("%d",ptr[i]);
	}
	free(ptr);
	return 0;
}


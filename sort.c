#include <stdio.h>
void sort(int arr[],int n){
	int temp;
	for(int i=0; i<n; i++){
	
		if (arr[i]>arr[i+1]){
			temp=arr[i];
            arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}

int main()
{
	int n;
	scanf("%d \n",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	sort(arr,n);
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[]={10,20,10,30,40,50,50},i,j;
	printf("These are Duplicate Element\n");
	for(i=0;i<7;i++){
		for(j=i+1;j<7;j++){
			if(arr[i]==arr[j])
			printf("%d\n",arr[j]);
		}
	}
	return 0;
}


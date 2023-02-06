#include<stdio.h>
int main(){
	int a[5]={10,20,1,888,50},i,key=888,found=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==key){
			printf("key found");
			found=1;
		}
	}
	if(found==0)
	{
		printf("Not found");
	}
	return 0;
}


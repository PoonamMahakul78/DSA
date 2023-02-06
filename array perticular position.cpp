#include<stdio.h>
int main()
{
	int a[7]={10,20,10,30,40,50},i,pos=1,ele=999;
	for(i=5;i>=pos;i--){
a[i+1]=a[i];		
	}
	a[pos]=ele;
	for(i=0;i<7;i++){
		printf("%d\n",a[i]);
	}
	return 0;

}


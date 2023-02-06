#include<stdio.h>
int main()
{
	int a[5]={26,18,13,9,95};
	int i,even=0,odd=0;
	for(i=0;i<4;i++){
		if(a[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	printf("total even numbers are %d\n",even);
	printf("total odd numbers are %d\n",odd);
	return 0;
}


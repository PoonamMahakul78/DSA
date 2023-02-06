#include<stdio.h>
int main()
{
	int i;
	int a;
	for(a='E';a>='A';a--){
		for(i=5;i>=0;i--){
			printf("%c ",a);
		}
		printf("\n");
	}
	return 0;
}


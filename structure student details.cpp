#include<stdio.h>
struct stduent{
	char name[30];
	int age;
	int roll;
};
void print(struct stduent s)
{
	printf("%s %d %d",s.name,s.age,s.roll);
}
int main()
{
	struct stduent s={"Anita",18,105};
	print(s);
	return 0;
}


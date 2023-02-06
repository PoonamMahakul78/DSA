#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	struct details{
		char course[30];
		char branch[20];
	}d;
};
struct student s;
int main()
{
	printf("Enter student rollno\n");
	scanf("%d",&s.rollno);
	printf("Enter student name\n");
	fflush(stdin);
	gets(s.name);
	printf("Enter student course\n");
	fflush(stdin);
	gets(s.d.course);
	printf("Enter student branch\n");
	gets(s.d.branch);
	printf("stduent information\n");
	printf("student rollno is %d\n",s.rollno);
	printf("student name is %s\n",s.name);
	printf("student course is %s\n",s.d.course);
	printf("student branch is %d\n",s.d.branch);
	return 0;
	
}


#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
	
};
struct node *head=NULL;

void insert(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if (head==NULL)
	{
		newNode->prev=NULL;
		newNode->next=newNode;
		head=newNode;
		printf("%d inserted successfully\n",val);
	}
	else{
		struct node *temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
		newNode->next=head;
		head->prev=newNode;
	}
	printf("%d is inserted successfully \n",val);
}
	

void dltlast()
{
if(head==NULL)
{
	printf("The DLL is empty\n");
}
else{
	struct node *temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->prev->next=head;
	head=temp->prev->next;
	printf("%d was deleted from the DCLL\n",temp->data);
	temp->next=NULL;
	temp->prev=NULL;
	free(temp);
}
}
	
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	
	dltlast();
	dltlast();
	dltlast();
	dltlast();
	
	return 0;
}


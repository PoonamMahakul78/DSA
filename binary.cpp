#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *left;
	int key;
	struct node*right;
};
struct node *root=NULL;
struct node*getnewNode(int val){
	
	
    struct node*newNode=malloc(sizeof(struct node)));
	new node->key=val;
	new node->left=null;
	new node->right=null;
	return newnode;
}
struct node *insert(struct node *root,int val){
	if(root==null)
	return getnewnode(val);
	else if(root);
}


#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

void push(struct node** head_ref,int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=data;
	newnode->next=*head_ref;
	*head_ref=newnode;
	return;
}

void deletenode(struct node** head_ref,int key)
{
	struct node* temp=*head_ref,*prev;
	while(temp!=NULL&&temp->data==key)
	{
		*head_ref=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL&&temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}
	
	if(temp==NULL)
	return;
	
	prev->next=temp->next;
	free(temp);
	return;
}

void printlist(struct node* noe)
{
	while(noe!=NULL)
	{
		cout<<noe->data<<endl;
		noe=noe->next;
	}
}

int main() {
	// your code goes here
	struct node* head=NULL;
	push(&head,8);
	push(&head,1);
	push(&head,9);
	push(&head,0);
	printlist(head);
	deletenode(&head,1);
	deletenode(&head,8);
	printlist(head);
	return 0;
}
#include"linklist.h"
#include<cstdlib>
linklist :: linklist()
{
	head = NULL;		
}
struct node * linklist :: insert(int x)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->link = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct node *temp1;
		temp1 = head;
		while(temp1->link != NULL)
		{
			temp1 = temp1->link;
		}
		temp1->link = temp;
	}
	return head;
}
struct node * linklist :: addstart(int x)
{
	struct node *temp;	
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data =x;
	temp->link = head;
	head = temp;
	return head;
}


struct node * linklist :: addafter(int position,int x)
{
	struct node * temp;
	temp = head;
	int i=1;
	while(temp->link != NULL && i != position)
	{
		i = i+1;
		temp = temp->link;
	}
	struct node *newtemp;
	newtemp = (struct node*)malloc(sizeof(struct node));
	newtemp->data = x;
	//struct node *sucsr;
	//sucsr = temp->link;
	newtemp->link = temp->link;
	temp->link = newtemp;
	cout<<" \n added successfully ";
	return head;
	
}

/*
struct node * linklist :: addbefore(int x,int y)
{
	// shud insert x b4 y
	struct node * temp;
	temp = head;
	int i=0;
	while((temp->link)->data != y)
	{
		i = i+1;
		temp = temp->link;
	}
	struct node *newtemp;
	newtemp = (struct node*)malloc(sizeof(struct node));
	newtemp->data = x;
	//struct node *sucsr;
	//sucsr = temp->link;
	newtemp->link = temp->link;
	temp->link = newtemp;
	return head;
}
*/
struct node * linklist :: del(int position)
{
	int i=1;
	struct node* x;
	x = head;
	if(position == 1)
	{
		//deleteing head node
		head = head->link; 
		return head;	
	}
	while(i!=position)
	{
		x = x->link;
		i = i+1;
	}
	//struct node *y;
	//y = x->link;
	//we have to delete y and x is the b4 node
	x->link = (x->link)->link;
	return head;

}
void  linklist :: display()
{
	struct node *temp;
	temp = head;
	while(temp->link != NULL)
	{
		cout<<"\n"<<temp->data;

		temp =temp->link;
	}
	cout<<endl<<temp->data;
}
bool linklist :: search (int x)
{
	struct node *temp;
	temp = head;	
	while(temp->link != NULL)
	{
		if(temp->data == x)
			return true;
		temp = temp->link;
	}
	
	return false;
}

int linklist :: count()
{
	int n =1;
	struct node *temp;
	temp = head;
	while(temp->link != NULL)
	{
		n = n +1;
		temp = temp->link;
	}
	return n;
}
int linklist :: sumalt()
{
	int sum ;
	struct node *temp;
	temp = head;
	sum = temp->data;
	while(temp->link != NULL && temp->link->link != NULL)
	{
		temp = (temp->link)->link;
		sum = sum + temp->data;
		//cout<<"\n data of temp > link "<<(temp->link)->data<<"\n data of temp > link > link "<<((temp->link)->link)->data<<"\n sum till now"<<sum;
		//temp = (temp->link)->link;
	}
	return sum;
}


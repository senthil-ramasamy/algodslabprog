#include"poly.h"
#include<cstdlib>
linklist :: linklist()
{
	head = NULL;		
}
struct node * linklist :: insert(int coeff1,int pow1)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->coeff = coeff1;
	temp->pow = pow1;
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
/*
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
*/
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
struct node* linklist :: polyadd(linklist &a,linklist &b)
{
	struct node *trav1,*trav2;
	trav1 = a.head;
	trav2 = b.head;
	if(a.head == NULL)
	{
		head = b.head;
		return head;
	}
	if(b.head == NULL)
	{
		head = a.head;
		return head;
	}
	//while(trav1->link != NULL && trav2->link != NULL)
	do
	{
		if(trav1->pow == trav2->pow)
		{
			insert(trav1->coeff+trav2->coeff,trav1->pow);
			trav1 = trav1->link;
			trav2 = trav2->link;
		}
		else
		{
			if(trav1->pow > trav2->pow)
			{
				insert(trav1->coeff,trav1->pow);
				trav1 = trav1->link;
			}
			else
			{
				insert(trav2->coeff,trav2->pow);
				trav2 = trav2->link;
			}
		}
	}while(trav1 != NULL && trav2 != NULL);
	return head;
}
	
	
void linklist :: display()
{
	struct node *temp;
	temp = head;
	cout<<"\n";
	while(temp->link != NULL)
	{
		cout<<" (("<<temp->coeff<<")x^"<<temp->pow<<")+";
		temp = temp->link;
	}
	cout<<" (("<<temp->coeff<<")x^"<<temp->pow<<")";
}
/*
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
*/

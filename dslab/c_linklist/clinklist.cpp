#include"clinklist.h"
#include<cstdlib>
clinklist :: clinklist()
{
	head = (struct node*)malloc(sizeof(struct node));
	head->link = head;
	//head->llink = head;		
}

/*

struct node * clinklist :: insert(int x)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	//temp->rlink = temp->llink =  NULL;
	
	if(head->rlink == NULL)
	{
		head->rlink = temp;
		head->llink =
	}
	
	{
		struct node *trav;
		trav = head;

//		else
		{
			
		//int i=1;
		while(temp->link != head)
		{
			temp = temp->link;
		}
		}
		temp->link = trav->link;
		//temp->llink = trav;
		trav->link = temp;
		//trav->rlink = temp;
		//temp->llink = trav;
		//temp->rlink = NULL;
	}
	return head;
}

*/



struct node * clinklist :: insert(int x,int position)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	//temp->rlink = temp->llink =  NULL;
	/*
	if(head->rlink == NULL)
	{
		head->rlink = temp;
		head->llink =
	}
	*/
	{
	struct node *trav;
	trav = head;
	if(position == -1)
	{
		while(trav->link != head)
		
		{
			trav = trav->link;
		
		}
	}
	else
	{
			
		int i=0;
		while(i != position)
		{
			i = i+1;
			trav = trav->link;
		}
	}
		temp->link = trav->link;

		//temp->llink = trav;
		trav->link = temp;
		//trav->rlink = temp;
		//temp->llink = trav;
		//temp->rlink = NULL;
	}
	return head;
}
void clinklist :: dup1()
{
	struct node *temp1,*temp2,*dup;
	temp1= head;
	while(temp1->link != head)
	{
		temp2 = temp1;
		while(temp2->link != head)
		{
			if(temp1->data == temp2->link->data )
			{
				dup =temp2->link;
				temp2->link = temp2->link->link;
				free(dup);
			}
			else
			{
			temp2 = temp2->link;
			}
		}
		temp1 = temp1->link;
	}
}
void clinklist :: dup2()
{
	struct node *temp,*trav;
	trav = head;
	temp = head->link;
	int hash[10000];
	while(temp->link != head)
	{
		hash[temp->data]++;
		if(hash[temp->data] >1)
		{
	
			trav->link = trav->link->link;
		}
		temp = temp->link;
		trav= trav->link;
	}
	
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
*/
/*
struct node * dclinklist :: insertright(int position,int x)
{
	struct node * temp;
	temp = head;
	int i=1;
	while(temp->rlink != NULL && i != position)
	{
		i = i+1;
		temp = temp->rlink;
	}
	struct node *newtemp = (struct node*)malloc(sizeof(struct node));
	newtemp->data = x;
	newtemp->rlink = temp ->rlink;
	temp->rlink->llink = newtemp;
	newtemp->llink = temp;
	temp->rlink = newtemp;
	
	return head;
}
*/

/*
struct node * dclinklist :: insertafter(int position,int x)
{
	struct node * temp;
	temp = head;
	int i=1;
	while(temp->rlink != head && i != position)
	{
		i = i+1;
		temp = temp->rlink;
	}
	struct node *newtemp = (struct node*)malloc(sizeof(struct node));
	newtemp->data =x;
	newtemp->llink = temp ->llink;
	newtemp->rlink = temp;
	temp->llink->rlink = newtemp;
	temp->llink = newtemp;
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
struct node * clinklist :: del(int position)
{
	int i=1;
	struct node* trav;
	trav = head;
	/*
	if(position == 1)
	{
		//deleteing head node
		head = head->rlink; 
		head->llink = NULL;
		return head;	
	}
	*/
	while(i!=(position))
	{
		//trav->rlink->llink = trav;
		//trav->rlink= trav->rlink->rlink;
		trav = trav->link;
		i = i+1;
	}
	//struct node *y;
	//y = x->link;
	//we have to delete y and x is the b4 node
	//x -> rlink = ( x -> rlink )-> rlink ;
	//trav->rlink =trav->rlink->rlink ;
	//trav->link->llink = trav;
	trav->link =trav->link->link ;
	return head;

}


void  clinklist :: display()
{
	struct node *temp;
	temp = head;
	while(temp->link != head )
	{
		//cout<<"\n"<<temp->data;

		temp =temp->link;
		cout<<"\n"<<temp->data;
	}
	//cout<<endl<<temp->data;
}

bool clinklist :: search (int x)
{
	struct node *temp;
	temp = head;	
	while(temp->link != head)
	{
		if(temp->data == x)
			return true;
		temp = temp->link;
	}
	
	return false;
}

int clinklist :: count()
{
	int n =0;
	struct node *temp;
	temp = head;
	while(temp->link != head)
	{
		n = n +1;
		temp = temp->link;
	}
	return n;
}
/*
int linklist :: sumalt()
{
	int sum ;
	struct node *temp;
	temp = head;
	sum = temp->data;
	while(temp->link != NULL)
	{
		temp = (temp->link)->link;
		sum = sum + temp->data;
		//cout<<"\n data of temp > link "<<(temp->link)->data<<"\n data of temp > link > link "<<((temp->link)->link)->data<<"\n sum till now"<<sum;
		//temp = (temp->link)->link;
	}
	return sum;
}
*/

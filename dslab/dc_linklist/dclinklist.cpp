#include"dclinklist.h"
#include<cstdlib>
dclinklist :: dclinklist()
{
	head = (struct node*)malloc(sizeof(struct node));
	head->rlink = head;
	head->llink = head;		
}
struct node * dclinklist :: insert(int x,int position)
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
		while(trav->rlink != head)
		{
			trav = trav->rlink;
		}
		else
		{
			
		int i=1;
		while(temp->rlink != head && i != (position+1))
		{
			i = i+1;
			trav = trav->rlink;
		}
		}
		temp->rlink = trav->rlink;
		temp->llink = trav;
		trav->rlink->llink = temp;
		trav->rlink = temp;
		//temp->llink = trav;
		//temp->rlink = NULL;
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
struct node * dclinklist :: del(int position)
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
		trav = trav->rlink;
		i = i+1;
	}
	//struct node *y;
	//y = x->link;
	//we have to delete y and x is the b4 node
	//x -> rlink = ( x -> rlink )-> rlink ;
	//trav->rlink =trav->rlink->rlink ;
	trav->rlink->llink = trav;
	trav->rlink =trav->rlink->rlink ;
	return head;

}


void  dclinklist :: display()
{
	struct node *temp;
	temp = head;
	while(temp->rlink != head )
	{
		//cout<<"\n"<<temp->data;

		temp =temp->rlink;
		cout<<"\n"<<temp->data;
	}
	//cout<<endl<<temp->data;
}

bool dclinklist :: search (int x)
{
	struct node *temp;
	temp = head;	
	while(temp->rlink != head)
	{
		if(temp->data == x)
			return true;
		temp = temp->rlink;
	}
	
	return false;
}

int dclinklist :: count()
{
	int n =0;
	struct node *temp;
	temp = head;
	while(temp->rlink != head)
	{
		n = n +1;
		temp = temp->rlink;
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

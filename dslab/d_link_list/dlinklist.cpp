#include"dlinklist.h"
#include<cstdlib>
dlinklist :: dlinklist()
{
	head = NULL;		
}
struct node * dlinklist :: insert(int x)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->rlink = temp->llink =  NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct node *temp1;
		temp1 = head;
		while(temp1->rlink != NULL)
		{
			temp1 = temp1->rlink;
		}
		temp1->rlink = temp;
		temp->llink = temp1;
		temp->rlink = NULL;
	}
	return head;
}
struct node* dlinklist ::  merge(dlinklist &a,dlinklist &b)
{
	struct node *trav1,*trav2;
	trav1 = a.head;
	trav2 = b.head;
	int position = 1;
	if( a.head == NULL)
	{
		head = b.head;
		return head;
	}
	else if( b.head == NULL)
	{
		head = a.head;
		return head;
	}
	else
	{
		while( trav1->rlink != NULL && trav2->rlink != NULL)
		{
			cout<<"\n adding "<<trav1->data<<endl;
			insert(trav1->data);
			trav1 = trav1->rlink;
			cout<<"\n adding "<<trav2->data<<endl;
			insert(trav2->data);
			trav2 = trav2->rlink;
		}
		insert(trav1->data);
		insert(trav2->data); 

		while( trav1->rlink != NULL)
		{
			trav1 = trav1->rlink;
			insert(trav1->data);
		}
		
		while( trav2->rlink != NULL)
		{
			//insert(trav2->data);
			trav2 = trav2->rlink;
			insert(trav2->data);
		}
		return head;
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

struct node * dlinklist :: insertright(int position,int x)
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



struct node * dlinklist :: insertleft(int position,int x)
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
	newtemp->data =x;
	newtemp->llink = temp ->llink;
	newtemp->rlink = temp;
	temp->llink->rlink = newtemp;
	temp->llink = newtemp;
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
struct node * dlinklist :: del(int position)
{
	int i=1;
	struct node* trav;
	trav = head;
	if(position == 1)
	{
		//deleteing head node
		head = head->rlink; 
		head->llink = NULL;
		return head;	
	}
	while(i!=(position-1))
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
	trav->rlink->llink = trav;
	trav->rlink = trav->rlink->rlink;
	return head;

}
void  dlinklist :: display()
{
	struct node *temp;
	temp = head;
	while(temp->rlink != NULL )
	{
		cout<<"\n"<<temp->data;

		temp =temp->rlink;
	}
	cout<<endl<<temp->data;
}

bool dlinklist :: search (int x)
{
	struct node *temp;
	temp = head;	
	while(temp->rlink != NULL)
	{
		if(temp->data == x)
			return true;
		temp = temp->rlink;
	}
	
	return false;
}

int dlinklist :: count()
{
	int n =1;
	struct node *temp;
	temp = head;
	while(temp->rlink != NULL)
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

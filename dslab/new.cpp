#include<stdio.h>
	#include<iostream>
	#include<stdlib.h>
	#include<string.h>
	using namespace std;
	struct node
	{
		int data;
		struct node *link;
	};
	class linklist
	{
		private:
			struct node *head;
		public:
			linklist()
			{
				head = NULL;		
			}
			struct node *add(int x)
			{
				struct node *new1;
				new1 = (struct node*)malloc(sizeof(struct node));
				new1->link = NULL;
				new1->data = x;
				struct node *trav;
				if(head == NULL)
				{
					head = new1;
					return head;
				}
				trav = head;
				while(trav->link != NULL)
				{
					trav = trav->link;
				}
				trav->link = new1;
				return head;
			}
			void disp()
			{
				struct node *trav;
				trav = head;
				while(trav->link != NULL)
				{
					cout<<"\n"<<trav->data<<" ";
					trav = trav->link;
				}
				cout<<trav->data<<endl;
			}

	};
	int main()
	{
		linklist a;
		a.add(10);
		a.add(20);
		a.disp();
		return 0;
	}

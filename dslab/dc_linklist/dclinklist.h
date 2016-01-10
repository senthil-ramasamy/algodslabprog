#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *llink;
	struct node *rlink;
};
//typedef struct listnode node;
class dclinklist
{
	private:
		struct node *head;
	public:
		dclinklist();
		struct node *insert(int x,int postion);
		struct node *del(int position);
		void display();
		bool search(int x);
		int count();
		//struct node *insertafter(int position,int x);
		//struct node *insertright(int position,int x);
		//struct node *del(int position);
		//struct node *addbefore(int x,int y);
		//int sumalt();	
};


	

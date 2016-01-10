#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *link;
	//struct node *rlink;
};
//typedef struct listnode node;
class clinklist
{
	private:
		struct node *head;
	public:
		clinklist();
		struct node *insert(int x,int postion);	
		//struct node *insert(int x);
		struct node *del(int position);
		void display();
		bool search(int x);
		int count();
		void dup1();
		void dup2();
		//struct node *insertafter(int position,int x);
		//struct node *insertright(int position,int x);
		//struct node *del(int position);
		//struct node *addbefore(int x,int y);
		//int sumalt();	
};


	

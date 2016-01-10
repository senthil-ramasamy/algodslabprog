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
class dlinklist
{
	private:
		struct node *head;
	public:
		dlinklist();
		struct node *insert(int x);
		//struct node *del(int position);
		void display();
		bool search(int x);
		int count();
		struct node *insertleft(int position,int x);
		struct node *insertright(int position,int x);
		struct node *del(int position);
		struct node *merge(dlinklist&a , dlinklist&);	
			//int sumalt();	
};


	

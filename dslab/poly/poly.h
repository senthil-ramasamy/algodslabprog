#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int pow;
	int coeff;
	//int data;
	struct node *link;
};
//typedef struct listnode node;
class linklist
{
	private:
		struct node *head;
	public:
		linklist();
		struct node *insert(int coeff1,int pow1);
		struct node *del(int position);
		void display();
		struct node *polyadd(linklist &a,linklist &b);
		//bool search(int );
		//int count();
		//struct node *addstart(int x);
		//struct node *addafter(int position,int x);
		//struct node *deletebefore(int number);
		//struct node *addbefore(int x,int y);
		//int sumalt();	
};


	

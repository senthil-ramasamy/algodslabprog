#include<iostream>
#include<stdio.h>
#define max 100
using namespace std;
class queue
{
	private:
		int rear,front;
		int *a;
	public:
		queue()
		{
			rear =0;
			front = 0;
			a = new int[max];
		}
		bool IsFull()
		{
			if(rear == max)
				return true;
			else
				return false;
		}
		bool IsEmpty()
		{
			if(front == rear )
				return true;
			return false;
		}
		void add( int x)
		{
			if(IsFull())
				cout<<"\n queue full";
			else			
				a[++rear] = x;
		}
		int del()
		{
			if(IsEmpty())
			{
				cout<<"\n queue is empty error code";
				return -1;
			}
			else
			{
				front++;
				return a[front];
			}
		}
		int front1()
		{
			return a[front+1];
		}
};
int main()
{
	queue q;
	int n;int ch;
	do{
		cout<<"\n enter 1- add 2-del 3 - exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n enter the element to add to queue";
				cin>>n;
				q.add(n);
				break;
			case 2:
				cout<<"\n deleting first entry";
				cout<<q.del();
				break;
		}
				

	}while(ch!=3);
	
	return 0;
}

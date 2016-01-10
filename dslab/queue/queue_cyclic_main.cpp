#include<iostream>
#include<cstring>
#include"queue_cyclic.h"
using namespace std;
int main()
{
	queue q(10);
	int ch,n;
	do
	{
		cout<<"\n enter 1-add 2-del 4-exit";
		cin>>ch;
		switch(ch)
		{
			case 1:	
				cout<<"\nenter the no to add :";
				cin>>n; 	
				q.add(n);	
				break;
			case 2:
				cout<<"\n deleted front entry"<<q.del();
				break;
		}
	
	}while(ch != 4);
	return 0;
}

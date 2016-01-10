#include"poly.h"
int main()
{
	linklist l1;
	l1.insert(5,4);
	l1.insert(10,3);
	l1.insert(3,2);
	l1.insert(2,1);
	l1.insert(1,0);
	cout<<"\n displaying first polynomial";
	l1.display();
	linklist l2;
	l2.insert(4,2);
	l2.insert(21,1);
	l2.insert(22,0);
	cout<<"\n displaying second polynomial";
	l2.display();
	linklist l3;
	l3.polyadd(l1,l2);
	cout<<"\n added polynomial :";
	l3.display();
/*
	cout<<"\n deleteing postion 3";
	li.del(3);
	li.display();
	cout<<"\n deleting head node";
	li.del(1);
	li.display();
	int tofind;
	cout<<"\n enter a no to search";
	cin>>tofind;
	cout<<"\n searching ...";
	if(li.search(tofind) == true )
		cout<<"\nfound";
	else
		cout<<"\nnot found";
	cout<<"\n counting the no of nodes in the list";
	cout<<li.count();
	cout<<"\n adding at the left";
	li.addstart(1000);
	li.display();	
	cout<<"\n adding 4 after postition 2";
	li.addafter(2,4);
	li.display();
	cout<<"\n adding 5 after position 3";
	li.addafter(3,5);
	li.display();
	//cout<<"1";
	cout<<"\n counting the sum of alternative elements";
	cout<<li.sumalt();
	
	//li.addafter(3,5);
	//li.display();
*/
	return 0;
}

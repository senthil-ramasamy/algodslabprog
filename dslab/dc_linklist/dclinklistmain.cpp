#include"dclinklist.h"
int main()
{
	dclinklist li;
	li.insert(100,-1);
	li.insert(200,-1);
	li.insert(300,-1);
	li.insert(400,-1);
	li.insert(500,-1);
	li.display();
	cout<<"\n inserting after 333 position 3";
	li.insert(333,3);
	li.display();
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
/*
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

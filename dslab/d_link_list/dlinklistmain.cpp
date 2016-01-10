#include"dlinklist.h"
int main()
{
	//dlinklist l1,l2,l3;
	//int choice=1,n,pos;


	dlinklist l1,l2;
/*
	int choice=1,n,pos;
	while(choice != 7)
	{ 
	cout<<"\n enter 1. to insert at end for list 1 \n 11. to insert at end for list 2 \n 100. to merge both lists and display\n2.insert after postion \n3.delete at ostion \n 4.remove duplicates\n5.display \n6.count \n66.search \n7.exit";
	cin>>choice;
	switch(choice)
	{
	case 1:
	cout<<"\n enter no ";
	cin >>n;
	l1.insert(n);
	break;
	case 11:
	cout<<"\n enter no for list 2:"
	cin>>n;
	l2.insert(n);
	break;
	case 2:
	cout<<"\n enter no and postion";
	cin>>n>>pos;
	l1.insert(n,pos);
	break;
	case 5:
	l1.display();
	break;
	case 3:
	cout<<"\n deleteing postion :";
	cin>>n;
	li.del(n);
	break;
	case 4:
	
	cout<<"\n deleting duplicates :";
	li.dup1();break;
	case 66:
	int tofind;
	cout<<"\n enter a no to search";
	cin>>tofind;
	cout<<"\n searching ...";
	if(li.search(tofind) == true )
		cout<<"\nfound";
	else
		cout<<"\nnot found";
	break;
	case 6:
	cout<<"\n counting the no of nodes in the list";
	cout<<li.count();break;
	}
	}

	cout<<"\n adding at the left";
	li.addstart(1000);
*/
	
	l1.insert(100);
	l2.insert(200);
	l1.insert(300);
	l2.insert(400);
	l1.insert(500);
	l2.insert(600);
	l1.insert(700);
	l2.insert(800);
	l1.insert(1000);
	l1.insert(2000);
	cout<<"\n diplaying list1";
	l1.display();
	cout<<"\n displaying list 2";
	l2.display();
	dlinklist l3;
	l3.merge(l1,l2);
	l3.display();
/*
	cout<<"\n inserting 3 after 3 ";
	li.insertright(3,3);
	li.display();
	cout<<"\n inserting 44 after 4";
	li.insertright(4,44);
	li.display();
	cout<<"\n inserting 33 before postion 3";
	li.insertleft(3,33);
	li.display();
	cout<<"\n deleting postion 3";
	li.del(3);
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

	cout<<"\n adding at the left";
	li.addstart(1000);
	li.display();	
	cout<<"\n adding 4 after postition 2";
	li.addafter(2,4);
	li.display();
	cout<<"\n counting the sum of alternative elements";
	cout<<li.sumalt();
*/
	return 0;
}

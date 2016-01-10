#include"clinklist.h"
int main()
{

	clinklist li;
	int choice=1,n,pos;
	while(choice != 7)
	{ 
	cout<<"\nenter\n 1.to insert at end \n 2.insert after postion \n 3.delete at ostion \n 4.remove duplicates\n 5.display \n 6.count \n 66.search \n 7.exit";
	cin>>choice;
	switch(choice)
	{
	case 1:
	cout<<"\n enter no ";
	cin >>n;
	li.insert(n,-1);
	break;
	case 2:
	cout<<"\n enter no and postion";
	cin>>n>>pos;
	li.insert(n,pos);
	break;
	case 5:
	cout<<"\n displaying elements";
	li.display();
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

#include<iostream>
#include<stdio.h>
#define max 100
using namespace std;
class stack
{

	private:
		int *a;
		int top;
	public:
		stack();
		bool IsEmpty();
		bool IsFull();
		void push(int);
		int  pop();
		int peek();
 
};
/*
int main()
{
	stack s;
	int n,no;
	do{
	cout<<"\n\n enter\n 1 - push\n 2-pop\n 3-top\n 4 - end, enter ur choice :  ";
	cin>>no;

	switch(no)
	{
		case 1:
			cout<<"\n enter element to push : ";
			cin >> n;
			s.push(n);
		break;
		case 2:
			cout<<"\n popping out ";
			cout<<s.pop();
			break;
		case 3 : 
			cout<<"\n top function ";
			cout<<s.peek();
			break;
	}
	}
	while(no != 4);		
	return 0;

};
int main()
{
        stack s;
        int n;
        do{
        int n;
        do{
        stack s;
        int n;
        do{
        cout<<"\n\n enter\n 1 - push\n 2-pop\n 3-top\n 4 - end, enter ur choice :  ";
        cin>>n;

        switch(n)
        {
                case 1:
                        cout<<"\n enter element to push : ";
                        cin >> n;
                        s.push(n);
                break;
                case 2:
                        cout<<"\n popping out ";
                        cout<<s.pop();
                        break;
                case 3 :
                        cout<<"\n top function ";
                        cout<<s.peek();
                        break;
        }
        }
        while(n != 4);
        return 0;
}
;
}*/


#include<iostream>
#include<stdio.h>
#include "stack.h"
//#define max 100
using namespace std;
stack ::stack()	
{
	top = -1;
	a = new int [max];
}
bool stack:: IsEmpty()
{
	if(top == -1)
	{
		return true;
	}
	return false;
}
bool stack :: IsFull()
{
	if(top >= max)
	{
		return true;
	}
	return false;
}
void stack :: push(int x)
{
	if(IsFull())
	{
		cout<<"\n stack overflow";
	}
	a[++top] = x;
}
int stack::  pop()
{
	if(IsEmpty())
	{
		cout<<"\n stack empty code :";
		return -1;
	}
	return a[top--];
}
int stack :: peek()
{
	if(IsEmpty())
	{
		cout<<"\n stack empty code :";
		return -1;
	}	
	return a[top];
}
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

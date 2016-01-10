#include<iostream>
#include<cstring>
#include"queue_cyclic.h"
using namespace std;
queue :: queue ( int x)
{
	size  = x;
	a = new int[size];
	front = rear = count = 0;
}
void queue :: add ( int e)
{
	if( front == rear && count == size )
	{
		cout<<"\n queue full \n";
	}
	else
	{
		rear = (rear + 1) % size;
		a[rear] =e;
		count++;
	}
}
int queue :: del()
{
	int f;
	if( front == rear && count ==0)
	{
		cout<<"\nqueue empty error code";
		return -1;
	}
	else
	{
		//f = a[front];
		front = (front + 1) % size;
		f = a[front];
		count--;
		return f;
	}
}


		
		


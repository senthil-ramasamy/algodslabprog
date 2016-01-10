#include<iostream>
#include<cstring>
using namespace std;
class queue
{
	private:
		int *a;
		int size,front,rear,count;
	public:
		queue(int);
		void add(int);
		int del();
};

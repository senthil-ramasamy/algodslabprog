#include<iostream>
#include<cstring>
#include"stack.h"
#include"queue_cyclic.h"
using namespace std;
int main()
{
	char str[100],ans[100],temp;
	int len;
	int i;
	//len = strlen(str);
	cout<<"\n enter the string :";
	cin>>str;
	len = strlen(str);
	queue stq(100);
	stack sts;
	for( i =0; str[i]!= '\0';i++)	
	{
		stq.add(str[i]);
	}
	for(i=0;i<len;i++)
	{
		temp = stq.del();
		sts.push(temp);
	}
	for(i=0;i<len;i++)
	{
		ans[i] = sts.pop();
	}
	ans[i] = '\0';
	cout<<"\n reversed : "<<ans;
	return 0;
}
	

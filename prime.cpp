#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter a number";
	cin>>n;
	bool isprime=true;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{	
		  count++;
		  cout<<"not a prime";
		  break;
		}
	}
	if(count==0)
	cout<<"prime number";
	return 0;
}

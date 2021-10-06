/*atson gives Sherlock an array 
of integers. His challenge is 
to find an element of the array
such that the sum of all elements 
to the left is equal to the sum of
all elements to the right. 
For instance, given the array arr[5,6,8,11] ,8
is between two subarrays that 
sum to 11. If your starting array is ,
that element satisfies 
the rule as left and right sum to 0 .*/
#include<iostream>
using namespace std;
typedef long long ll;
ll pre[10000];
int main()
{ int t;
 cin>>t;
 while(t--)
 {ll n,x;
 	for(ll i=0;i<n;i++)
 	{
 		cin>>x;
 		if(i==0) pre[i]=x;
 		else pre[i]=pre[i-1]+x;
	}
	bool flag =false ;
	for(ll i=1;i<n-1;i++)
	{
		if(pre[i-1]==pre [n-1]-pre[i])
		{
			flag =true ;
		}
		if(flag==true)
		cout<<"yes";
		else
		cout<<"no";
	}
	return 0;
 }
}




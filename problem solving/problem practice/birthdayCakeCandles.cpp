#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void print(int temp[], int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
}

int birthdayCakeCandles(int ar[],int n)
{
int temp[n];
memset(temp,0,sizeof(temp));
for(int i =0;i<n;i++)
{//cout<<"hi";
temp[ar[i]]++;
//cout<<temp[ar[i]]<<"  this"<<endl;
}
print(temp,n);
int set =0;
for(int i =0;i<n;i++)
{
if(temp[ar[i]]!=0 && set<temp[ar[i]])
set=temp[ar[i]];
}
//cout<<set<<endl;
return set;
}
int main()
{
//int ar[10]={18 ,90 ,90, 13, 90, 75 ,90 ,8, 90 ,43};
int ar[10]={18 ,90 ,90, 13, 90, 75, 90, 8 ,90 ,43};
cout<<birthdayCakeCandles(ar,10);
}

#include<iostream>
#include<math.h>
using namespace std;

/*long  long fact(long long  n)
{ long long  i ;
 long long facto=1;
	for(i=1;i<=n;i++)
	{
		facto = facto * i; 
	}
	return facto;
}
int factt(int n)
{
	if(n<=1)
	return 1;
	else
	return n*factt(n-1);
}

int linearsearch(int ar[],int n,int data)
{
	for(int i=0;i<n;i++)
	{
		if(ar[i]==data)
		return i;
	}
	return -1;
	
}*/
void bs(int ar[], int data , int start , int end)
{
	int mid=ceil((start+end)/2);
	if(start<=end)
	{
		if(ar[mid]>data)
		{
			bs(ar,data,start,mid-1);
		}
		else if(ar[mid]<data)
		{
			bs(ar,data ,mid+1,end);
		}
		else if(ar[mid]==data)
		{
		//	return mid;
			cout<<data<<"found @"<<mid;
		}
		else
		{
			cout<<"not found ";
			
		}
	}
	else
	{
		cout<<"array is empty \n";
		
	}
}
int main()
{ int ar[5]={9, 10, 11, 12, 13};
//bs(ar,11,1,5);
cout<<ceil(1.9);
}

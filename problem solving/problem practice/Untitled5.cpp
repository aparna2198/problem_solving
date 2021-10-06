#include<iostream>
using namespace std;
int fun(int n, int ar[])
{int  x=0;
    int freq[100]={};
	for(int i =0;i<n;i++)
	{  int el=ar[i];
    freq[el]++;
//	cout<<freq[el]<<endl; // freq []={1 1 2 2 3 1 1  4 3 }
	}
	
	for(int j=0;j<100;j++)
	{  cout<<freq[j]<<"\t";
	   x=x+freq[j]/2;
	}
return x;
}
int main()
{             
  	int ar[]={10 ,10, 10, 10, 10, 10, 10, 10, 20};
    cout<<"\n \n \n output"<<	fun(9,ar);
}

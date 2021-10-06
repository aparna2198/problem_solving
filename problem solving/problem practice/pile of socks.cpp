#include<iostream>
using namespace std;
int fun(int n, int ar[])
{int  x=0;
    int freq[100]={};
	for(int i =0;i<n;i++)
	{  int el=ar[i];
    freq[el]++;// increases the values by one and not the  index
        // this must be dtoring the number of times the colours are repeated
        // 10 -  4 times
        // 20 -3
        // 30 - 1
        // 50 -1
//	cout<<freq[el]<<endl; // freq []={1 1 2 2 3 1 1  4 3 }
	}
	
	for(int j=0;j<100;j++)// this loop should roatate 100 times and not  n times
	{  cout<<freq[j]<<"\t";
	   x=x+freq[j]/2;
	   /*{i =0  x= 0+ 4/2= 0+ 2=2
		    i=1  x= 2+ 3/2=2+1=3
			i=2   x 3+ 1/2=0  }*/
	}
return x;
}
int main()
{             
  	int ar[]={10 ,10, 10, 10, 10, 10, 10, 10, 20};
    cout<<"\n \n \n output"<<	fun(9,ar);
}

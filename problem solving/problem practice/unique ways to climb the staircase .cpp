/*There's a staircase with N steps, and you can climb 1 or 2 steps at a time.
 Given N, write a function that returns the number of unique ways you can climb
  the staircase. The order of the steps matters.*/
  
#include<iostream>
using namespace std;


int fun(int n)
{// uppose
// n is 1                  1 way
// n is 2 so 11 2          2 ways
// n is 3 so  111  12  21 3 ways
// n is 4 so  1111 121 211 22  112
	if(n<=1)
	return 1;
	else
	return (fun(n-1)+fun(n-2));
}
int funn(int n)
{int sum=1;

	for(int i =2;i<n;i++)
	{
		sum= sum+i;
		cout<<"sum \t"<<sum;
		cout<<endl;
	}
	return sum;
}
int main()
{ int n =4;
cout<<funn(n);
	
}

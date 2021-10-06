#include <bits/stdc++.h>
#include<vector>
using namespace std;


/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr[][3],int n) {
    int sum1=0,sum2=0;
for (int i =0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {     
	if(i==j)
    {//cout<<"i ="<<i<<" "<<"j= "<<j<<"\t";
	sum1=sum1+arr[i][j];
	sum2=sum2+arr[n-i-1][j];
    }
    }
    
}
cout<<"sum1 "<<" "<<sum1<<"sum2 "<<sum2<<endl;
if(sum1>sum2)
return sum1-sum2;
else
return  sum2-sum1;
}

int main()
{
	int a[3][3]={{11,2,4},{4,5,6},{10,8,-12}};
cout<<diagonalDifference(a,3);
}

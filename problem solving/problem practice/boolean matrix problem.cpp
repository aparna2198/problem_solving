#include<iostream>
using namespace std;
#define r 4
#define c 3
void print(bool a[r][c])
{
		for(int i =0 ;i<r;i++)
	{	 	for(int j =0;j<c;j++)
	 	{cout<<a[i][j]<<"\t ";
		}
	cout<<endl;
	}
}
void print(bool a[])
{
		for(int i =0 ;i<r;i++)
	{	cout<<a[i]<<"\t ";
    }
	cout<<endl;
	}
 void fun(bool mat[][c])
 {// taken two matrix one for row and one for column
 	bool row[r]={0};
 	bool col[c]={0};
 	for(int i =0;i<r;i++)
 	{
	 for(int j =0 ;j<c;j++)
 	{
 		if(mat[i][j]==1)
 		{   cout<<"\n at "<<i<<" "<<j<<"it is 1"<<endl;
 			row[i]=1; //1 1 1;
 			col[j]=1; //1;
 	 cout<<"row matrix \n";
	 print(row);
	 cout<<"column matrix \n";
	 print(col);
		}
	}
	
	 }

	 for(int i =0 ;i<r;i++)
	 {
	 	for(int j =0;j<c;j++)
	 	{
	 		if(row[i]==1 || col[j]==1)
	 		{
	 			mat[i][j]=1;
	 			//{{1, 0, 0},{1, 0 ,0},{1, 0 ,0},{0, 0 ,0}};
	 			cout<<"mat matrix \n";
	 			print(mat);
			 }
		 }
	 }
 }
int main()
{
	bool a[4][3]={{1, 0, 0},{1, 0 ,0},{1,0 ,1},{0, 0 ,0}};
	fun(a);
    print(a);
}

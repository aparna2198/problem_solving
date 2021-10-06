#include<iostream>
using namespace std;
void print(int n)
{
	int i,j;
	for(i=0;i<n;i++)// rows
	{
		for(j=n;j>0;j--)//particular number how much times i have to repeat
		{ // for n is two this loop will repeat for two times on matter what
		 //
			int k=i;
			while(k!=0)
			{
				cout<<j<<"\t";
				k--;
			}
		}
	cout<<endl;	
	}
	
}
int main()
{
	print(3);
}
/*
#include<iostream>
using namespace std;
void printPat(int n)
{int i,j;
for(i=n;i>0;i--)// since we want the rows max to min 
{ /* 2 2 1 1
   1 1
   j loop decides how many times the same number wil get repaeted
   i loop decides how many rows will be there
       
    for(j=n;j>0;j--)
    {
        int k=i;// i times the particular number has to repeated
        while(k!=0)
        {
            cout<<j<<"\t";
            k--;
        }
        
    }
    cout<<endl;
}
//Your code here
}
int main()
{
	printPat(2);
}

*/

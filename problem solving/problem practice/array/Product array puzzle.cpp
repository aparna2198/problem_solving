#include<iostream>

using namespace std;

int  form(int ar[],int a,int n)
{ int i =0,product=1;
//cout<<"for i \t"<<i<<endl<<endl;;

	while(i<n)
	{ 
	if(i!=a)
	{product=product*ar[i];
	//cout<<i<<"th time loop product * ar[i]"<<product<<" "<<ar[i]<<"\t"<<product<<endl;
	i++;	
	}
	else
	i++;
}
return product;
}
void puzzle(int ar[],int n)
{  int temp[n],j=n,product=1;
	for(int i=0;i<n;i++)
	{
	 temp[i]=form(ar,i,n);
	
	}
for(int i =0;i<n;i++)
{
	cout<<temp[i]<<" ";
}
}

int main()
{
int ar[5]={7, 8 ,6 ,4, 6};	
puzzle(ar,5);
}

/* learning
what i dont want is a th element so if to avoid that and
while to traverse the entire 
but when i bump upon the kemenet i dont want i only increase the loop value which is i here and traverse futher
*/

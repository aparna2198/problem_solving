#include<iostream>
using namespace std;
#define ASCII_MAX 256
char fun(char s[])
{   int max =0;
char result;
	int count[ASCII_MAX]={0};
	for(int i =0;s[i];i++)
	{
		++count[s[i]];
	//	cout<<"count"<<count[i]<<endl;
		if(max < count[s[i]])
		{//cout<<s[i]<<" "<<count[i]<<endl;
		result=s[i];
		max= count[s[i]];
		}

	}
	cout<<"max \t"<<max;
	return result;
}
int main()
{
	 char s[]="ttsple s";
	 cout<<fun(s);
	 
}

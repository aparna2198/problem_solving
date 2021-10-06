#include<iostream>
#include<string.h>
using namespace std;
#define size 26

string isvalid(string s)
 {
    int freq[size];
    int k=0;
memset(freq,0,sizeof(freq));
for (int i =0;s[i];i++)
{
    freq[s[i]-'a']++;
}
//aabbc
 for(int i =0;i<size;i++)
 {   
	 
	 cout<<"\n i"<<i<<"\t "<< freq[i]<<endl;

 }
for(int i=1;i<size;i++)
{
    if(freq[i-1]==freq[i])
    continue;
    else
    { 
     if(freq[i]!=0)
	{cout<< "@ "<<i<< "difference"<<endl;
		freq[i]=freq[i-1];
        k++;
	}
    }
}
if(k>1)
{
    return "NO";
}
else
return "YES";
}

int main()
{   //abbccc
string a("abcdeef");
cout<<isvalid(a);		
}


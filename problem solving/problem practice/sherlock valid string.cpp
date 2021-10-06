#include<iostream>
using namespace std;
#define size 26

string isValid(string s)
 {
    int freq[size];
    int k=0;

for (int i =0;s[i];i++)
{
    freq[s[i]-'a']++;
}
//aabbc

for(int i=0;freq[i];i++)
{
    if(freq[i]==freq[i+1])
    continue;
    else
    {
        k++;
    }
}
for(int i=0;freq[i];i++)
{
	cout<<" \n i "<<i<< "\t "<< freq[i]<<endl;
}
if(k>1)
{
    return "yes";
}
else
return "no";
}

int main()
{   //abbccc
		
}


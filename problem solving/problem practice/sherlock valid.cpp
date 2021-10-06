#include<bits/stdc++.h>
using namespace std;
#define size 26
int main()
{   //abbccc
	int i,j,k;
	string s;
	int freq[size];
	memset(freq,0,sizeof(freq));
	cin>>s;
	for(i=0;s[i];i++)
	freq[s[i]-'a']++;// f{1 3 1}
	j=0;k=0;
	for(i=0;i<size;i++)
	{
		if(freq[i]==0)
		continue;
		else if(j==0)
		j=freq[i];// a)j=1
		if(freq[i]!=j)//a)i=0 1 !=1 false 2!=1	b)3!=1 true 
		k++;// b) k=2
	}
if(k>0)
printf("NO\n");
else
printf("YES\n");

return 0;	
	
}

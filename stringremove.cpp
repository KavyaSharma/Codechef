#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	long long int i,j,k,l,temp[100000]={0};
	string s,s1;
	cin>>s;
	cin>>s1;
	for(i=0;i<s1.length();i++)
	{
	
	temp[s1[i]]=1;
	//cout<<temp[s1[i]]<<endl;	
}
	int n=s.length();
	for(i=0;i<n;i++)
	{
		if(temp[s[i]]==1)
		{	//cout<<temp[s[i]]<<s[i];
			s.erase(i,1);
			n--;
			i=i-1;
		
		}
		//if(s.length()==0)
		//break;
		//	cout<<s[i];
	}
	cout<<s<<endl;
	return 0;
}


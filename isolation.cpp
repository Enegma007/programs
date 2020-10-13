#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		long long n,q;cin>>n>>q;
		string st;cin>>st;
		long long f[27]={0};
		
		for(int i=0;i<n;i++)
		f[st[i]-'a']++;
	
		while(q--)
		{int c;cin>>c;long long ct=0;
			for(int i=0;i<26;i++)
			{if(f[i]<c)
			ct+=f[i];
			else
			ct+=c;
			}
			cout<<n-ct<<"\n";
		}
	}
	return 0;
}
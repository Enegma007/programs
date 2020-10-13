#include<bits/stdc++.h>
#define ull long long int 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(;t > 0;t--)
	{
		int sum = 0;
		int a;string c,s1="";
		cin >> a >> c;
		while(a--)
		{
			cin >> s1;
			int a;
			if(s1 == "CONTEST_WON" || s1 == "BUG_FOUND")
				cin >> a;
			if(s1 == "CONTEST_WON"){
				sum += 300;	
				if(a<=20)sum+=(20-a);
			}
			else if(s1 == "BUG_FOUND")
				sum += a;
			else if(s1 == "TOP_CONTRIBUTOR")
				sum += 300;
			else
				sum += 50;
		}
		if(c == "INDIAN")
			cout << sum/200;
		else
			cout << sum/400;
		cout << endl;
	}
	return 0;
}
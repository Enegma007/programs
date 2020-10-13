#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s.length() <= 10) {
			cout << s << endl;
		}
		else {
			// string s2,s3,s4;
			int t;
			// s2=s[0];
			t = s.length() - 2;
			cout << s[0] << t << s[t + 1] << endl;
		}
		// string s1;
		// s1 = (s.length() <= 10) ? s : s[0] + s.lenght() - 2 + s[t + 1];
		// cout << s1 << endl;
	}
	return 0;
}
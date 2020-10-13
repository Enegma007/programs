#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int Nmax = 100005;

int main(){
    fastio
	int t;
	cin >> t;
	while(t--){
		int n; cin>>n;
        string s; cin>>s;
		int a=0, b=0, na=n, nb=n;
        int ans=-1;
        for(int i=0; i<2*n; i++){
            if(i%2==0){
                if(s[i] == '1') a++;
                na--;
            } else {
                if(s[i] == '1') b++;
                nb--;
            }
            
            if(a>b+nb or b>a+na){
                ans=i+1; break;
            }
        }
        
        if(ans==-1) ans=2*n;
        
        cout<<ans<<"\n";
	}
			
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int counte(vector<long long int> &ve){
	unordered_set<long long int> s;
	int k=0;
	for(int i=0;i<ve.size();i++){
		if(ve[i]){
			if(s.find(ve[i])==s.end()){
				s.insert(ve[i]);
				k++;
			}
		}
	} 
	return k;
}
long long int hcf(long long int &a,long long int &b,long long int &c){
	long long int j;
	long long int k=min(a,b);
	k=min(k,c);
	for(long long int i=2;i<=k;i++){
		if(a%i==0 && b%i==0 && c%i==0){
			j=i;
			break;
		}
	}
	// return j;
	if(j){
		return j;
	}
	else{
		return 0;
	}
}
int checkz(long long int &a,long long int &b,long long int &c,long long int &p,long long int &q,long long int &r,vector<long long int> &ve){
	int ans;
	int d=counte()
}
int checkz(long long int &a,long long int &b,long long int &c,long long int &p,long long int &q,long long int &r){
	
}
int checkz(long long int &a,long long int &b,long long int &c,long long int &p,long long int &q,long long int &r){
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long int p,q,r,a,b,c,d,m,re,x,n1,n2,n3,h;
		cin>>p>>q>>r;
		cin>>a>>b>>c;
		vector<long long int> v,v1,v2;
		v.push_back(a-p);
		v.push_back(b-q);
		v.push_back(c-r);
		if(p!=0){
			v1.push_back(a/p);
			v2.push_back(a%p);
		}
		else{
			if(a!=0){
				v1.push_back(0);
				v2.push_back(a);
			}
			else{
				v1.push_back(0);
				v2.push_back(0);
			}
		}
		if(q!=0){
			v1.push_back(b/q);
			v2.push_back(b%q);
	 	}
		else{
			if(b!=0){
				v1.push_back(0);
				v2.push_back(b);
			}
			else{
				v1.push_back(0);
				v2.push_back(0);
			}
			
		}
		if(r!=0){
			v1.push_back(c/r);
			v2.push_back(c%r);
		}
		else{
			if(c!=0){
				v1.push_back(0);
				v2.push_back(c);
			}
			else{
				v1.push_back(0);
				v2.push_back(0);
			}
		}
		d=counte(v);
		m=counte(v1);
		re=counte(v2);
		
		cout<<x<<"\n";

	}
	return 0;
}
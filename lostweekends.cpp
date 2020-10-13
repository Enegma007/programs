// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		vector<int> v;
// 		int sum=0,p;
// 		for(int i=0;i<6;i++){
// 			int a;
// 			cin>>a;
// 			v.push_back(a);
// 		}
// 		for(int i=0;i<5;i++){
// 			// sum=(v[5]*2)+v[i];
// 			sum+=v[i]*v[5];
// 		}
// 		// cout<<sum<<"\n";
// 		if(sum<=120){
// 			cout<<"No"<<"\n";
// 		}
// 		else{
// 			cout<<"Yes"<<"\n";
// 		}

// 	}
// 	return 0;
// }
if(!d){
			x=0;
		}
		else if(d==1){
			x=1;
		}
		else if(d==2){
			x=2;

		}
		else if(d==3){
			if(m==1 && !re){
				x=1;
			}
			else if(m==2 && (!re || re==1)){
				x=2;
			}
			else if(m==1 && (re==1 || re==2)){
				x=2;
			}
			else if(m==3){
				h=hcf(a,b,c);
				if(h){
					n1=(a/h)-p;
					n2=(b/h)-q;
					n3=(c/h)-r;
					
					if(n1==n2){
						if(n1==n3){
							x=2;
							
						}
						else{
							x=3;
						}
						
					}
					else{
						x=3;
						
					}
				}
				else{
					x=3;
					
				}
			}
			else{
				x=3;
				
			}

		}
		else{
			x=3;
			
		}
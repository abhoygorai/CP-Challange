#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;

ll int Abs(ll int x){
	if(x<0)
		return -x;
	else
		return x;
}

void Solve(){
    ll int a, b, s;
    cin>>a>>b>>s;
    // cout<<"c: "<<s - (Abs(a)+Abs(b))<<" "<<(Abs(a)+Abs(b))<<endl;

    if(s<Abs(a) || s<Abs(b)){
    	NN;
    	return;
    	// cout<<"*"<<endl;
    }
    if(s < (Abs(a)+Abs(b))){
    	NN;
    	return;
    }
    if((s - (Abs(a)+Abs(b))) % 2 == 0){
    	YY;
    	// cout<<"**"<<endl;
    }
    else{
    	NN
    	// cout<<"***"<<endl;
    }
    

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
        Solve();
    
    return 0;
}
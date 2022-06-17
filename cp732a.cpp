#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int k, r, count =1, t;
    cin>>k>>r;
    t = k;

    while(1){
    	if(k%10 == 0 || k%10 == r){
    		cout<<count<<endl;
    		return;
    	}
    	else{
    		count++;
    		k+=t;
    	}
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
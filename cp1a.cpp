#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

ll int Ceil(ll int a, ll int b){
	if(a%b == 0)
		return a/b;
	else
		return (a/b)+1;
}

void Solve(){
    ll int a, b, c;
    cin>>a>>b>>c;

    cout<<Ceil(a, c)*Ceil(b, c)<<endl;
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
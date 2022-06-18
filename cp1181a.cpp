#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    ll int x, y, z;
    cin>>x>>y>>z;
    
    cout<<(x+y)/z<<" "<<min(z - (x%z), z-(y%z))<<endl;   
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
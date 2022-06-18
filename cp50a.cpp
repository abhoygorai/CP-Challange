#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, m;
    cin>>m>>n;

    if(n%2 == 0 || m%2 == 0){
    	cout<<(n*m)/2<<endl;
    }
    else{
    	cout<<((n-1)/2)*m + m/2<<endl;
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
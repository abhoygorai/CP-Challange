#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    ll int a, b, n, x=0;
    cin>>a>>b>>n;
    if(a>b)
    	swap(a, b);

    while(a<=n && b<=n){
    	x++;
    	if(a>b)
    		b+=a;
    	else
    		a+=b;
    }
    cout<<x<<endl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}

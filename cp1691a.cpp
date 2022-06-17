#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, ans=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    for (int i = 0; i < n-1; i+=2)
    {
    	if((a[i]+a[i+1])%2!=0){
    		ans++;
    		i-=2;
    	}
    }
    // cout<<"c";
    cout<<ans<<endl;
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

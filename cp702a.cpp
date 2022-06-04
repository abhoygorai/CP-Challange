#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans=1, count=1;
    cin>>n;
    ll int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    for (int i = 0; i < n-1; ++i)
    {
    	if(a[i+1]>a[i])
    		count++;
    	else
    		count=1;

    	ans=max(count, ans);
    	// cout<<count<<" "<<ans<<endl;
    }
    cout<<ans<<endl;


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int k, n, w;

    cin>>k>>n>>w;
    w = (w*(w+1))/2;
    k=w*k;

    if(n>=k)
    	cout<<0<<endl;
    else
    	cout<<k-n<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t, p = 0;
    cin>>n>>t;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    while(p<(t-1)){
    	p+=a[p];
    }

    if(p == (t-1))
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;

    return 0;
}

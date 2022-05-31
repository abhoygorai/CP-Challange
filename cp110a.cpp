#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int n, t, count=0;
    vector<ll int>v;
    cin>>n; 
    t=n;

    while(t>0)
    {
    	v.push_back(t%10);
    	t/=10;        
    }
    reverse(v.begin(), v.end());

    for (ll int i = 0; i < v.size(); ++i)
    {
    	if(v[i]==4 || v[i]==7){
    		// cout<<v[i]<<"c"<<i<<endl;
    		count++;
    	}
    }
    // cout<<count<<endl;
    if(count==4 || count==7)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;

    return 0;
}

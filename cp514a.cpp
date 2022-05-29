#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int n, t, size=0;
    vector<ll int> v;
    cin>>n;
    t=n;
    while(t>0){
    	v.push_back(t%10);
    	t=t/10;
    	size++;
    }
    reverse(v.begin(), v.end());
    if(v[0] >= 5 && v[0] != 9)
    	v[0] = 9-v[0];

    for (int i = 1; i<size; ++i)
    {
    	if(v[i] >= 5)
    	v[i] = 9-v[i];
    }

    for (int i = 0; i < size; ++i)
    {
    	cout<<v[i];
    }
    cout<<endl;
    return 0;
}

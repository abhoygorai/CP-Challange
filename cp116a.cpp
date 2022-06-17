#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m=0, ans=0;
    cin>>n;
 
    vector<pair<int, int>>v;
 
    for (int i = 0; i < n; ++i)
    {
    	pair<int, int> t;
    	cin>>t.first>>t.second;
    	v.push_back(t);
    }
 
    for (int i = 0; i < n; ++i)
    {
    	m-=v[i].first;
    	m+=v[i].second;
    	ans=max(ans, m);
    }
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, m, ans=0;

    cin>>n>>m;

    string s[n];

    for (int i = 0; i < n; i++)
    {
    	cin>>s[i];
    }

    for (int i = 0; i < m; ++i)
    {
    	if(s[n-1][i] == 'D')
    		ans++;
    }
    for (int i = 0; i < n; ++i)
    {
    	if(s[i][m-1] == 'R')
    		ans++;
    }
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

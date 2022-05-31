#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    string ans="EASY";
    while(t--)
    {
        int t;
        cin>>t;
        if(t==1)
        	ans="HARD";
    }

    cout<<ans<<endl;
    return 0;
}

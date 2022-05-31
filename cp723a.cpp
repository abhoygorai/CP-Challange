#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin>>x>>y>>z;
    cout<<max(x, max(y, z))-min(x, min(y, z));


    return 0;
}

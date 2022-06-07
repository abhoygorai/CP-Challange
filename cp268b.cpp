#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n;
    cin>>n;

    cout<<((n*n*(n-1))/2)-((n*(n-1)*((2*n)-1))/6);

    return 0;
}

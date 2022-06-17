#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, l, c, d, p, nl, np, count1, count2, count3;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    count1=(k*l)/nl;
    count2=p/np;
    count3=c*d;

    cout<<min(count1, min(count2, count3))/n<<endl;

    return 0;
}

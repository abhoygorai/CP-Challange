#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    ll int n, m, k, ans = 0, m1, m2, c1, c2;
    cin>>n>>m>>k;

    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	tk(t);
    	v.push_back(t);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    m1 = v[0];
    m2 = v[1];

    c1 = (m/(k+1))*k + (m%(k+1));
    c2 = m/(k+1);

    ans = c1*m1 + c2*m2;

    cout<<ans<<endl;

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solve();
    return 0;
}
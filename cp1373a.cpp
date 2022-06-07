#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int a, b, c, ans1=-1, ans2=-1;

    cin>>a>>b>>c;

    if(!(a>=c))
    	ans1=1;

    float p = c/b;
    // cout<<"p: "<<p<<endl;
    if(p<a)
    	ans2=b;

cout<<ans1<<" "<<ans2<<endl;
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

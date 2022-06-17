#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){

    ll int n, m, ans=0, k;
    cin>>n>>m;

    if(m%n!=0){
        cout<<-1<<endl;
        return;
    }

    k=m/n;

    while(k%2 == 0){
        ans++;
        k/=2;
    }
    while(k%3 == 0){
        ans++;
        k/=3;
    }
    if(k==1)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve();

    return 0;
}

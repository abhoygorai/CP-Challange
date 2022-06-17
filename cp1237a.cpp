#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int a, b, i=1;
    cin>>a>>b;

    while(a<=b){
        if(a==b){
            cout<<"YES"<<endl;
            return;
        }
        else if(i%2 == 0)
            a+=2;
        else
            a++;
    i++;
    }
    cout<<"NO"<<endl;
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

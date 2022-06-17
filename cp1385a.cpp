#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    
    int a[3];
    for(auto &i:a)
    	cin>>i;

    sort(a, a+3);

    if(a[1] != a[2])
    	cout<<"NO"<<endl;
    else
    	cout<<"YES"<<endl<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
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

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int n, ans = 0, t, p;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++)
    	cin>>a[i];

    t = a[n-1];
    ans+=t;
    for (int i = n-2; i >= 0; --i)
    {   p = t;
        // cout<<"t: "<<t<<endl;

        if(t>0)
    	   while(t>a[i] || t==a[i+1] || t==p )
                t--;


        if(t<=a[i])
            ans+=t;
    }
    cout<<ans<<endl;

    return 0;
}

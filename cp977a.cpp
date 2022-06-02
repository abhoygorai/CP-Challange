#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n, k;
    cin>>n>>k;

    for (int i = 0; i < k; ++i)
    {
    	if(n%10 == 0)
    		n/=10;
    	else
    		n-=1;
    }
    cout<<n<<endl;



    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int a, b, c, n, sum = 0;
    cin>>a>>b>>c>>n;

    sum = a+b+c+n;
    if(sum % 3 != 0 || (sum/3 < max(a, max(b, c)))){
    	cout<<"NO"<<endl;
    	return;
    }
    else
    	cout<<"YES"<<endl;


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

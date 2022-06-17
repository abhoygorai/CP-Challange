#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, count=0;
    cin>>a>>b;
    while(a<=b){
    	count++;
    	a*=3;
    	b*=2;
    }
    cout<<count<<endl;
    return 0;
}

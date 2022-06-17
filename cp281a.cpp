#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s[0]>=97 && s[0]<=122)
    	s[0]-=32;
    cout<<s<<endl;
    return 0;
}

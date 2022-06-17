#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n;
    cin>>n;

    string s, s2;
    cin>>s;

    s2 = s;
    reverse(s2.begin(), s2.end());

    if(s==s2){
    	cout<<"YES"<<endl;
    	return;
    }

    for (int i = 0; i < n/2; ++i)
    {
    	if(!((s[i]+1) == (s[n-1-i]+1) || (s[i]-1) == (s[n-1-i]+1) || (s[i]+1) == (s[n-1-i]-1) || (s[i]+1) == (s[n-1-i]-1))){
    		cout<<"NO"<<endl;
    		return;
    	}
    }
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

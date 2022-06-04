#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
	int ans=0, i, j;
    string s;
    cin>>s;

   for(i=0; i<s.size(); i++)
   		if(s[i] == '1')
   			break;

   for(j=s.size()-1; j>=0; j--)
   		if(s[j] == '1')
   			break;

   	for (int k = i; k <= j; ++k)
   	{
   		if(s[k] == '0')
   			ans++;
   	}

   	cout<<ans<<endl;
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

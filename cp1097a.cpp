#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string table, ans = "NO";
    cin>>table;

    vector <string> v;
    for (int i = 0; i < 5; ++i)
    {
    	string t;
    	cin>>t;
    	v.push_back(t);
    }
    for (int i = 0; i < 5; ++i)
    {
    	if(v[i][0] == table[0]){
    		ans="YES";
    		break;
    	}
    }

    for (int i = 0; i < 5; ++i)
    {
    	if(v[i][1] == table[1]){
    		ans="YES";
    		break;
    	}
    }
    
    cout<<ans<<endl;

    return 0;
}

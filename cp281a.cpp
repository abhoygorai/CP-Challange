#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	string s;
    	cin>>s;
    	for (int j = 0; j < 3; ++j)
    	{
    		// cout<<s<<endl;
    		if(s[j]=='+'){
    			x++;
    			break;
    		}
    		else if(s[j]=='-'){
    			x--;
    			break;
    		}
    	}
    }
    cout<<x<<endl;
    return 0;
}

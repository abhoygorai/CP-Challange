#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int count=1, dummy;
    cin>>dummy;
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i+=count)
    {
    	count++;
    	cout<<s[i];
    }
    cout<<endl;

    return 0;
}

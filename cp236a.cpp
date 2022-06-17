#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int count=0;
    string s;
    cin>>s;

    map<char, int> m;

    for (int i = 0; i < s.size(); ++i)
    {
    	m.insert(pair<char, int> (s[i], 0));    	
    }

    for(auto it:m){
    	count++;
    }
    if(count%2==0)
    	cout<<"CHAT WITH HER!"<<endl;
    else
    	cout<<"IGNORE HIM!"<<endl;

    return 0;
}

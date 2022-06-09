#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int comp(string s, vector<char> v){
    sort(s.begin(), s.end());
    sort(v.begin(), v.end());

    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i] != v[i])
            return 0;
    }
    
    return 1;
}


int main()
{
    string s, s2;
    cin>>s;

    s2 += s[0];
    s2 += s[1];

    cout<<s2;


    return 0;
}

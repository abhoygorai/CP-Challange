#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<char, int> l;
    pair<char, int>p;
    p.first ='a';
    p.second= 1;
    l.insert(p);
    p.first ='b';
    p.second= 1;
    l.insert(p);


    for(auto x:l){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}

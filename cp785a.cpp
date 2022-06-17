#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int n, count =0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	string s;
    	cin>>s;
    	if(s == "Icosahedron")
    		count+=20;
    	else if(s == "Tetrahedron")
    		count+=4;
    	else if(s == "Cube")
    		count+=6;
    	else if(s == "Octahedron")
    		count+=8;
    	else if(s == "Dodecahedron")
    		count+=12;
    }
    cout<<count<<endl;
    return 0;
}

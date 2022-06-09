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


void Solve(){
    string s, h;
    cin>>s;
    cin>>h;

    if(h.size()<s.size()){
    	cout<<"NO"<<endl;
    	return;
    }

    vector<char> v;

    for (int i = 0; i <= h.size()-s.size(); ++i)
    {
    	for (int j = i; j < i+s.size(); ++j)
    	{
    		// cout<<h[j];
    		v.push_back(h[j]);
    	}


    	// cout<<s<<" ";
    	// for (int i = 0; i < v.size(); ++i)
    	// {
    	// 	cout<<v[i];
    	// }
    	// cout<<endl;



    	if(comp(s, v)){
    		cout<<"YES"<<endl;
    		return;
    	}
    	else
    		v.clear();

    }

    cout<<"NO"<<endl;
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

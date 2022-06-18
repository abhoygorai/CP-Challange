#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, k, good = 0, bad = 0;
    cin>>n>>k;

    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	tk(t);
    	v.push_back(t);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i)
    {
    	if(v[i] == v[i+1]){
    		good+=2;
    		i++;
    	}
    	else
    		bad++;
    }
   	
   	cout<<good+round((float)bad/2)<<endl;

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
        Solve();
    
    return 0;
}
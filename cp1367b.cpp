#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, c1=0, c2=0;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	tk(t);
    	v.push_back(t);
    }
    // for(auto i:v)
    // 	cout<<i<<" ";
    // cout<<endl;

    for (int i = 0; i < n; ++i)
    {
    	if((v[i]%2 != i%2) && i%2 == 0){
    		c1++;
    		// cout<<"*"<<endl;
    	}

    	else if((v[i]%2 != i%2) && i%2 == 1){
    		c2++;
    		// cout<<"*"<<endl;
    	}
    }

    // cout<<"c: "<<c1<<" "<<c2<<endl;

    if(c1 == c2)
    	cout<<c1<<endl;
    else
    	cout<<-1<<endl;

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif

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
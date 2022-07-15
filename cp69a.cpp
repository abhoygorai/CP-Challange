#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, a=0, b=0, c=0;
    cin>>n;
    while(n--){
    	int t;cin>>t;
    	a+=t;
    	cin>>t;
    	b+=t;
    	cin>>t;
    	c+=t;
    }
    if(a==0 && b==0 && c==0)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;

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
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;


void Solve(){
    int x, y;
    cin>>x>>y;

    if(x == y){
    	YY;
    	return;
    }

    if(x == 1){
    	NN;
    	return;
    }

    if(x <= 3 && y > 3){
    	NN;
    	return;
    }

    YY;
    

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
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
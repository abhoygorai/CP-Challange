#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;



void Solve(){
    int n, k;
    cin>>n>>k;

    while(1){
    	if(n<=k){
    		if(k%n == 0)
    			cout<<k/n<<endl;
    		else
    			cout<<(k/n)+1<<endl;
    		return;
    	}
   		else{
    		k*=2;
    	}
    }
    


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
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, sum=0, sum2 = 0;
    cin>>n;
    
    if((n/2)%2 !=0){
    	cout<<"NO"<<endl;
    	return;
    }
    cout<<"YES"<<endl;
    for (int i = 2; i <= n; i+=2)
    {
    	cout<<i<<" ";
    	sum+=i;
    }

    for (int i = 1; i < n-1; i+=2)
    {
    	cout<<i<<" ";
    	sum2 +=i;
    }
    cout<<sum-sum2<<endl;


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
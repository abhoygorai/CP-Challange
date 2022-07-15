#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;


void Solve(){
    string s;
    cin>>s;

    cout<<s;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    

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
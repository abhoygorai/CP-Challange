#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;
#define YY cout<<"YES"<<endl
#define NN cout<<"NO"<<endl

int Ev(ll int x, ll int y, ll int z, ll int f){
	int count = 0;

	if(x%2 == 0)
		count++;
	if(y%2 == 0)
		count++;
	if(z%2 == 0)
		count++;
	if(f%2 == 0)
		count++;
	return count;
}



void Solve(){
    ll int r, g, b, w;
    cin>>r>>g>>b>>w;

    if(Ev(r, g, b, w) >= 3)
        YY;
    else if(r>0 && g>0 && b>0 && Ev(r-1, g-1, b-1, w+1) >= 3)
        YY;
    else
        NN;

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
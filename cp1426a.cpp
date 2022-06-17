#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, x, f, l, i=0;
    cin>>n>>x;

    if(n <=2){
    	cout<<1<<endl;
    	return;
    }

    while(1){
    	f = (i*x)+3;
    	l = (x*(i+1))+2;
    	// cout<<"c: "<<f<<" "<<l<<endl;
    	if(n >= f && n <= l){
    		cout<<i+2<<endl;
    		return;
    	}
    	else
    		i++;
    }
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

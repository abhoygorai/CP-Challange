#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    ll int n, x, y, f1=1;

    cin>>n>>x>>y;

    ll int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    for (int i = 0; i < n; ++i){
    	// cout<<"f1: "<<f1<<"   ";

    	for (int j = i-1; ((j >= 0) && j>=(i-x)) ; --j)
    	{
    		// cout<<a[j]<<" ";

    		if(a[i] >= a[j]){
    			f1 = 0;
    			break;
    		}
    	}

    	// cout<<" |"<<a[i]<<"| ";

    	for (int j = i+1; ((j <= i+y) && j<=n-1); ++j){

    		// cout<<a[j]<<" ";

    	 	if(a[i] >= a[j]){
    	 		f1 = 0;
    	 		break;
    	 	}
    	}

    	// cout<<"   f1:"<<f1<<endl;
    	if(f1 == 1){
	    		cout<<i+1<<endl;
	    		return;
    	}
    	else{
    		// cout<<"else"<<endl;
    		f1 = 1;
    	}

	}
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solve();
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n;
    cin>>n;
    vector<int> a;

    


    for (int i = 1; i <= n; ++i)
    {
    	a.push_back(i);
    }

    // for(auto i:a)
    //     cout<<i;

    if(n==2){
    	cout<<2<<endl<<1<<" "<<2<<endl;
    }
    else{

	    cout<<2<<endl;
	    for (int i = n-2; i >= 0; --i){
	    	if(i == n-2){
	    		cout<<a[i-1]<<" "<<a[i+1]<<endl;
				a[i-1] = (a[i-1]+a[i+1])/2;
	    	}
	    	else{
	    		cout<<a[i]<<" "<<a[i+1]<<endl;
	    		a[i] = (a[i]+a[i+1])/2;
	    	}
		}
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

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    ll int n, s1=0, s2=0;
    cin>>n;
    vector<ll int> even;
    vector<ll int>odd;

    for (ll int i = 0; i < n; ++i)
    {
    	ll int t;
    	cin>>t;
    	if(t%2 == 0){
    		even.push_back(t);
    		s1++;
    	}
    	else{
    		odd.push_back(t);
    		s2++;
    	}
    }

    if(s2!=0){
    	cout<<s1<<endl;
    	return;
    }

    ll int sum=even[0], ans=0;
    for (int i = 1; i < s1; ++i)
    {
    	sum+=even[i];
    	ans++;
    }
    while(sum%2 == 0){
    	sum/=2;
    	ans++;
    }
    cout<<ans<<endl;

 //    int ans=0, flag=0;

	// while(flag==0){
	// 	for (ll int i = 0; i < s1; ++i, ans++)
	//     {
	//     	even[i]/=2;
	//     	if(even[i]%2!=0){
	//     		flag=1;
	//     		ans++;
	//     		break;
	//     	}
	//     }
	// }
	// cout<<ans+s1-1<<endl;
    

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

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, o=0, e = 0;
    cin>>n;

    int a[n];
    for(auto &i:a){
    	cin>>i;
    	if(i%2 == 0)
    		e++;
    	else
    		o++;
    }

    if(o == 0)
    	cout<<"NO"<<endl;
    else if(e == 0 && o%2 == 0)
    	cout<<"NO"<<endl;
    else
    	cout<<"YES"<<endl;


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

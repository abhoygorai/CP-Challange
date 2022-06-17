#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, t, size=0, ind=0, count=0;
    cin>>n; 
    t=n;
    vector<int> v, ans;
   	while(t>0){
   		v.push_back(t%10);
   		t/=10;
   		size++;
   	}
   	reverse(v.begin(), v.end());
   	for (int i = 0; i < size; ++i){
   		ind=size-i-1;
   		if(v[i]!=0){
   			count++;
   			ans.push_back(v[i]*(pow(10, ind)));
   		}
   	}
   	cout<<count<<endl;
   	for (int i = 0; i < count; ++i)
   	{
   		cout<<ans[i]<<" ";
   	}
   	cout<<endl;

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

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tk(n);
    int arr[n];
    rep(i, n){
    	cin>>arr[i];
    }
    int ans[n];
    for (int i = 0; i < n; ++i)
    {
    	ans[arr[i]-1]=i+1;
    }
    for(int x:ans){
    	cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

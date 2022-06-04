#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[3]={};
    string s;
    cin>>s;
    for(auto c:s){
    	if(c == '1')
    		arr[0]++;
    	else if(c=='2')
    		arr[1]++;
    	else if(c=='3')
    		arr[2]++;
    }
    for (int i = 0; i < arr[0]; ++i){
    	cout<<1;
    	if(i<arr[0]-1)
    		cout<<"+";
    }

    if(arr[0]!=0 && (arr[1]!=0 || arr[2]!=0))
    	cout<<"+";

    for (int i = 0; i < arr[1]; ++i){
    	cout<<2;
    	if(i<arr[1]-1)
    		cout<<"+";
    }

    if(arr[1]!=0 && arr[2]!=0)
    	cout<<"+";
    
    for (int i = 0; i < arr[2]; ++i){
    	cout<<3;
    	if(i<arr[2]-1)
    		cout<<"+";
    }

    return 0;
}

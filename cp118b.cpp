
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n;
    cin>>n;

    for (int i = 0; i < (n)+1; ++i)
    {
    	for (int j = 0; j < n-i; ++j)
    	{
    		cout<<"  ";
    	}
    	for (int j = 0; j < i; ++j)
    	{
            cout<<j<<" ";
    	}
    	for (int j =i; j>=0; --j)
    	{
    		if(j==0)
                cout<<j;
            else
                cout<<j<<" ";
    	}
    	cout<<endl;
    }
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j <= i; ++j)
    	{
    		cout<<"  ";
    	}
    	for (int j = 0; j < n-1-i; ++j)
    	{
    	   cout<<j<<" ";
    	}
    	for (int j = n-1-i; j >= 0; --j)
    	{
    		if(j==0)
                cout<<j;
            else
                cout<<j<<" ";
    	}
    	cout<<endl;
    }

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	Solve();

    return 0;
}

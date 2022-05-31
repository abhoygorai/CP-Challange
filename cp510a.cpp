#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, flag=1;
    cin>>n>>m;

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		if((i+1)%2!=0)
    			cout<<"#";
    		else if((i+1)%4 == 2 && (i+1)%2 == 0){
    			if(j==(m-1))
    				cout<<"#";
    			else
    				cout<<".";
    		}
    		else if((i+1)%4 == 0){
    			if(j==0)
    				cout<<"#";
    			else
    				cout<<".";
    		}

    	}
    	cout<<endl;	
    }

    return 0;
}

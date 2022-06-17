#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sum=0, i=0;
    cin>>n;
    if(n==1)
    	cout<<1<<endl;
    else{

	    do{
			i++;
			sum+=((i*(i+1))/2);
	    }while(sum<=n);
	    
	    cout<<i-1<<endl;
    }
    return 0;
}

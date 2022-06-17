#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int Max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int Min(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}


void Solve(){
    int n, m;
    cin>>n>>m;

    if(n%2 == 0 || m%2 == 0)
    	cout<<(m*n)/2<<endl;
    else
    	cout<<((Max(m, n)*(Min(n, m)-1))/2)+(Max(m, n)/2)+1<<endl;


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

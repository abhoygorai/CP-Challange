#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int x, y, n;
		cin >> x >> y >> n;
		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
		}   

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout); 
    #endif

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
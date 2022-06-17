#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, t1=-1, t2=-1, f;
    cin>>n;
    string s;
    cin>>s;

    vector <int> ans;

    for (int i = 0; i < n; ++i)
    {
    	if(s[i] == '1'){
    		t1 = i;
    		break;
    	}
    }

    for (int i = n-1; i >= 0; i--)
    {
    	if(s[i] == '1'){
    		t2 = (n-1)-i;
    		break;
    	}
    }
    if(t1 == -1 || t2 ==-1){
		cout<<n<<endl;
		return;
    }

    f = min(t1, t2);

    // cout<<t1<<" "<<t2<<" "<<f<<" "<<endl;
    cout<<(n-f)*2<<endl;
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

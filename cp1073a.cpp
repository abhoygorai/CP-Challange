#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
	int n;
	cin>>n;

    string s;
    cin>>s;

    char c = s[0];
    int flag = 1;

    for (int i = 0; i < n; ++i)
    {
    	if(c != s[i]){
    		flag = 0;
    		break;
    	}
    }

    if(flag == 1){
    	cout<<"NO";
    	return;
    }

    for(int i = 0; i<n-1; i++){
    	if(s[i] != s[i+1]){
    		cout<<"YES"<<endl<<(char)s[i]<<(char)s[i+1]<<endl;
    		return;
    	}
    }

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solve();


    return 0;
}

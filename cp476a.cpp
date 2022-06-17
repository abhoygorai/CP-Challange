#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
	int n, m, flag=0, t;
	float f;

    cin>>n>>m;
    t=m;

    if(n<m){
    	cout<<-1<<endl;
    	return;
    }

    do{
    	f=n/(float)m;
    	// cout<<"f: "<<f<<" m: "<<m<<endl;
    	if(f<=2){
			cout<<m<<endl;
			flag=1;
    		return;
    	}
    	else{
    		m+=t;
    	}

    }while(flag==0);


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solve();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, digits=0, temp, init, ans=0;
    cin>>n;

    init = n%10;
    temp = n;
    while(temp>0){
    	digits++;
    	temp/=10;
    }

    for (int i = 0; i < 10; ++i)
    {
    	if(i == init){
    		ans+=(i-1)*10;
    		if(digits==1)
    			ans+=1;
    		else if(digits==2)
    			ans+=3;
    		else if(digits==3)
    			ans+=6;
    		else if(digits==4)
    			ans+=10;
    	}
    }
    cout<<ans<<endl;

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

#include <bits/stdc++.h>
#include <sstream>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int f1=0, f2=0, f3=0, sum=0;
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); ++i)
    {
    	if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')
    		f2 = 1;
    	if(s[i] == '0')
    		f3 = 1; 
    }

    if(f1 == 0)
    {
    		int count = 0;
    		for (int k = 0; k < s.size(); ++k)
    		{
    			if(s[k] == '0')
    				count++;
    		}
    		if(count>=2)
    			f2 = 1;
   }

    for (int i = 0; i < s.size(); ++i)
    {
    	int x = s[i] - '0';
    	sum+=x;
    }

    if(sum%3 == 0)
    	f1=1;

    // cout<<"f: "<<f1<<f2<<f3<<endl;
    if(f1 == 1 && f2 == 1 && f3 == 1)
    	cout<<"red"<<endl;
    else
    	cout<<"cyan"<<endl;
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
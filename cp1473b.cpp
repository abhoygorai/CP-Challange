#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;

int lcm(int a, int b){
	int lcm;
	if(a>b)
   lcm = a;
   else
   lcm = b;
   while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         return lcm;
      }
      lcm++;
   }
}

string mul(int k, string sus){
	string res;
	while(k--){
		res += sus;
	}
	return res;
}

void Solve(){
    string s, t;
    cin>>s>>t;
    
    int ss = s.size(), st = t.size();

    if(mul(lcm(ss, st)/ss, s) == mul(lcm(ss, st)/st, t))
    	cout << mul(lcm(ss, st)/ss, s)<<endl;
    else
    	cout<<-1<<endl;


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
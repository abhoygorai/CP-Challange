#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

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

void Solve(){
    int x, y;
    cin>>x>>y;

    if(2*x>y)
        cout<<-1<<" "<<-1<<endl;
    else
        cout<<x<<" "<<2*x<<endl;
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

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, x, c1;
    cin>>n;

    x = n%7;
    c1=n/7;

    while(x%4 !=0 && c1!=0)
    {
    	x+=7;
    	c1--;
    }

    if(c1 == 0 && x%4 != 0){
    	cout<<-1<<endl;
    	return;
    }

    for (int i = 0; i < x/4; ++i)
    {
    	cout<<4;
    }
    for (int i = 0; i < c1; ++i)
    {
    	cout<<7;
    }
    cout<<endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   
        Solve();
   
    return 0;
}

#include <bits/stdc++.h> 
#include <sstream>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int h1, m1;
    scanf("%d:%d", &h1, &m1);
    int h2, m2;
    scanf("%d:%d", &h2, &m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t3 = (t1 + t2) / 2;
    printf("%02d:%02d\n", t3 / 60, t3 % 60);
        
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        Solve();
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, m, inn = 0, inm = 0, sum=0, ans = 0;
    cin>>n>>m;

    vector<vector<int>> a;
    vector<int> temporary;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int temp_int;cin>>temp_int;
            temporary.push_back(temp_int);
            cout<<temp_int<<" "; 
        }
        cout<<endl;
        a.push_back(temporary);
        temporary.clear();
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < m; ++j)
    //     {
    //         cout<<a[i][j]<<" ";         
    //     }
    //     cout<<endl;
    // }

    for(int i = 0; i<ceil((float)n/2); i++){
        for(int j = 0; j<ceil((float)m/2); j++){
            sum = a[i][j]+a[n-1-i][m-1-j]+a[i][m-1-j]+a[n-1-i][j];

            if(i == (n-1-i) || j == (m-1-j)){
                sum/=2;
            }

            cout<<sum<<endl;
        }
    }
    // cout<<ans<<endl;
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
    while(t--){
    Solve();

    }
    
    return 0;
}
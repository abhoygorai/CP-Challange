#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, m, i=0, j=0, f1=0, f2=0, f3 = 0, f4=0, f5 = 0;
    cin>>n>>m;
    while(i<n){
        while(j<m){
            if(i == 0 && j == 0){
                cout<<0<<" ";
                f3 = 0;
                j++;
            }
            else{
                while(j<m){
                    if(f1 == 0 && f2 == 0){
                        cout<<1<<" ";
                        f2=1;
                        j++;
                    }
                    else if(f1 == 0 && f2 == 1){
                        cout<<1<<" ";
                        f1 = 1;
                        f2 = 0;
                        j++;
                    }
                    else if(f1 == 1 && f2 == 0){
                        cout<<0<<" ";
                        f2 = 1;
                        j++;
                    }
                    else if(f1 == 1 && f2 == 1){
                        cout<<0<<" ";
                        f1 = 0;
                        f2 = 0;
                        j++;
                    }
                }
            }
        }
        cout<<endl;
        i++;
        j=0;
        if(f3 == 0 && f4 == 0){
            f1 = 0;
            f2 = 1;
            f4 = 1;
        }
        else if(f3 == 0 && f4 == 1){
            f1 = 0;
            f2 = 1;
            f3 = 1;
            f4 = 0;
        }
        else if(f3 == 1 && f4 == 0){
            f1 = 1;
            f2 = 1;
            f4 = 1;
        }
        else if(f3 == 1 && f4 == 1){
            f1 = 1;
            f1 = 1;
            f3 = 0;
            f4 = 0;
        }
    }
    

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
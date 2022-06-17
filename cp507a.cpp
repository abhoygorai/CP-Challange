#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n, k;
    cin>>n>>k;

    vector <int> v;

    vector <int> p;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    for(int i=0; i<n; i++){
    	p.push_back(a[i]);
    }
    sort(p.begin(), p.end());

    for (int i = 0; i < n; ++i)
    {
    	if(k>=p[i]){
    		k-=p[i];
    		v.push_back(p[i]);
    	}
    }

    cout<<v.size()<<endl;

    for (int i = 0; i < v.size(); ++i)
    {
    	for (int j = 0; j < n; ++j)
        {
            if(v[i] == a[j]){
                cout<<j+1<<" ";
                a[j]=-1;
                break;
            }
        }
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

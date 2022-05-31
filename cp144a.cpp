#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, min, max, count=0, i=0;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	int t;
    	cin>>t;
    	v.push_back(t);
    }
    min = *min_element(v.begin(), v.end());
    max = *max_element(v.begin(), v.end());

    while(v[i] != max){
    	i++;
    }
    while(v[0]!=max){
    	swap(v[i], v[i-1]);
    	count++;
    	i--;
    }

	i = v.size()-1;

    while(v[i] != min){
    	i--;
    }
    while(v[v.size()-1]!=min){
    	swap(v[i], v[i+1]);
    	count++;
    	i++;
    }

    cout<<count<<endl;

    return 0;
}

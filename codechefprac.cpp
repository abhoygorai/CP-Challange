#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
    int n;
    cin>>n;
    int arr[6]={0};

    for (int i = 0; i < n; ++i)
    {
    	string t;
    	cin>>t;
    	for (int j = 0; j < t.size(); ++j)
    	{
    		if(t[j] == 'c')	arr[0]++;
    		else if(t[j] == 'o')	arr[1]++;
    		else if(t[j] == 'd')	arr[2]++;
    		else if(t[j] == 'e')	arr[3]++;
    		else if(t[j] == 'h')	arr[4]++;
    		else if(t[j] == 'f')	arr[5]++;
    	}
    }
    // for(int i:arr)
    // 	cout<<i<<" ";
    // 	cout<<endl;
    
    arr[0]/=2;
    arr[3]/=2;

    cout<<*min_element(arr, arr+6)<<endl;
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

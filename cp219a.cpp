#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
	int k;
	cin>>k;

    string s;
    cin>>s;

    int arr[26]={0};

    for(auto c:s){
    	arr[c-97]++;
    }

    for (int i = 0; i < 26; ++i)
    {
    	if(arr[i] % k !=0){
    		cout<<-1<<endl;
    		return;
    	}
    }

    for (int i = 0; i < k; ++i){
    	for (int j = 0; j < 26; ++j){
    		for (int l = 0; l < arr[j]/k; ++l){
    			cout<<(char)(j+97);
    		}
    	}
    }
    cout<<endl;

    // for(auto i:arr){
    // 	cout<<i<<" ";
    // }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve();

    return 0;
}

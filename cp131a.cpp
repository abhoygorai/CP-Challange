#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){

	int flag = 0;
	string s;
    cin>>s;

    if(s.size() == 1 && (s[0] >= 65 && s[0]<= 90)){
		cout<<(char)(s[0]+32)<<endl;
		return;
    }
    else if(s.size() == 1 && (s[0] >= 97 && s[0]<= 122)){
    	cout<<(char)(s[0]-32)<<endl;
    	return;
    }

    else{

    		for (int i = 1; i < s.size(); ++i){
    			if(!(s[i] >= 65 && s[i]<= 90)){
    				flag = 1;
    				break;
    			}
    		}
    		// cout<<"flag: "<<flag<<endl;

    		if(flag == 0){
    			for(int i=0; i<s.size(); i++){
		    		if(i == 0 && (s[i] >= 97 && s[i]<= 122))
		    			cout<<(char)(s[i]-32);
		    		else
		    			cout<<(char)(s[i]+32);
		    	}
    		}
    		else
    			cout<<s<<endl;
   	}

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solve();

    return 0;
}

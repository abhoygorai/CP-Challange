#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

bool cVowel(char c){
	if(c == 97 || c == 101 || c == 105 || c == 111 || c == 117 || c == 121 || c == (121-32)||
		c == (97-32) || c == (101-32) || c == (105-32) || c == (111-32) || c == (117-32))
		return true;
	else 
		return false;
}

bool cSmall(char c){
	if(c>= 97 && c<=122)
		return true;
	else 
		return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    vector<char> v;
    // cout<<checkVowel(s[0]);

    for (int i = 0; i < s.size(); ++i)
    {
    	if(cSmall(s[i]) && !cVowel(s[i])){
    		v.push_back('.');
    		v.push_back(s[i]);
    	}
    	else if(!cSmall(s[i]) && !cVowel(s[i])){
    		v.push_back('.');
			v.push_back(s[i]+32);
    	}

  
    }
    for(auto a:v){
    	cout<<a;
    }
    cout<<endl;
    return 0;
}

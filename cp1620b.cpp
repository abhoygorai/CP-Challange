#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void Solve(){
	int w, h, s1, s2, s3, s4;
	cin>>w>>h;

	vector<int>g1;
	vector<int>g2;
	vector<int>v1;
	vector<int>v2;

	cin>>s1;
	for (int i = 0; i < s1; ++i)
	{
		tk(t);
		g1.push_back(t);
	}
	sort(g1.begin(), g1.end());

	cin>>s2;
	for (int i = 0; i < s2; ++i)
	{
		tk(t);
		g2.push_back(t);
	}
	sort(g2.begin(), g2.end());


	cin>>s3;
	for (int i = 0; i < s3; ++i)
	{
		tk(t);
		v1.push_back(t);
	}
	sort(v1.begin(), v1.end());

	cin>>s4;
	for (int i = 0; i < s4; ++i)
	{
		tk(t);
		v2.push_back(t);
	}
	sort(v2.begin(), v2.end());

	int p1 = abs(g1[0]-g1[s1-1]);
	int p2 = abs(g2[0]-g2[s2-1]);
	int p3 = abs(v1[0]-v1[s3-1]);
	int p4 = abs(v2[0]-v2[s4-1]);

	p1*=h;
	p2*=h;
	p3*=w;
	p4*=w;

	// cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;
	cout<<max(max(p1, p2), max(p3, p4))<<endl;

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
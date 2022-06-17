#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    int i, j, count=0, val1, val2;
    int arr[5][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)	
            cin >> arr[i][j];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            if(arr[i][j]==1){
				val1=i;
				val2=j;
    			break;
            }
    }
    			

    // cout<<val1<<val2<<endl;
    val1++;val2++;
    if(val1>3)
    	count+=(val1-3);
    else 
    	count+=(3-val1);
    if(val2>3)
    	count+=(val2-3);
    else 
    	count+=(3-val2);

	cout<<count<<endl;
    
    return 0;
}

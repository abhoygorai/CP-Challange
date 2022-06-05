#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin>>p;

    int arr[7];
    for (int i = 0; i < 7; ++i)
    {
    	cin>>arr[i];
    }

    while(p>0){

    	p-=arr[0];
    	if(p <= 0){
    		cout<<1<<endl;
    		break;
    	}

    	p-=arr[1];
    	if(p <= 0){
    		cout<<2<<endl;
    		break;
    	}

    	p-=arr[2];
    	if(p <= 0){
    		cout<<3<<endl;
    		break;
    	}

    	p-=arr[3];
    	if(p <= 0){
    		cout<<4<<endl;
    		break;
    	}

    	p-=arr[4];
    	if(p <= 0){
    		cout<<5<<endl;
    		break;
    	}

    	p-=arr[5];
    	if(p <= 0){
    		cout<<6<<endl;
    		break;
    	}

    	p-=arr[6];
    	if(p <= 0){
    		cout<<7<<endl;
    		break;
    	}

    }


    
    return 0;
}

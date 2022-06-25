#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    #endif

 
    int N;
    cin >> N;
 
    while (N-- > 0) {
        long long K;
        int X;
        cin >> K >> X;
        cout << 9 * (K - 1) + X << '\n';
    }
}
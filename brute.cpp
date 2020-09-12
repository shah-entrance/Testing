#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n, x, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        ans += x;
    }
    cout << 2*ans << endl;
    return 0;
}


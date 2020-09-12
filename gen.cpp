#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
    int n = rng() % 10 + 2;
    cout << n << "\n";
    for(int i = 0; i < n; i++){
        if(i > 0)
            cout << " ";
        cout << rng() % 10 + 1;
    }
    cout << "\n";
    return 0;
}


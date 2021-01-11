// https://codeforces.com/contest/1392/problem/A

#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

void solve(){
    // Write your code from here....
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
    
    bool ok = 0;
    for(ll i = 0; i < n-1; i++){
        if(v[i] != v[i+1]){
            ok = 1;
            break;
        }
    }
    if(ok){
        cout << 1 << endl;
        return;
    }
    else{
        cout << n << endl;
        return;
    }

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
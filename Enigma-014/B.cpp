// https://codeforces.com/contest/1099/problem/A

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
    ll w,h; cin>>w>>h;
    ll aw,ah; cin>>aw>>ah;
    ll bw, bh; cin>>bw>>bh;
    for(int i=h;i>0;i--){
        w+=i;
        if(i==ah) w=max(0ll,w-aw);
        if(i==bh) w=max(0ll,w-bw);
    }
    cout<<w<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
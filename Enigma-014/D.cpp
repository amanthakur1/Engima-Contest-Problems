// https://codeforces.com/contest/1043/problem/C

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
    string s; cin>>s;
    int n=s.size();
    int ans[n]={0};

    int i=0;
    while(i<n){
        int cnta=0,cntb=0,apos,bpos;
        while(i<n and s[i]=='b') cntb++, bpos=i++;
        while(i<n and s[i]=='a') cnta++, apos=i++;
        
        if(cnta and cntb) ans[apos]=ans[bpos]=1;
    }

    for(auto i:ans) cout<<i<<" ";

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
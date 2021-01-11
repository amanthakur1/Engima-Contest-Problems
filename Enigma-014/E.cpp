// https://codeforces.com/contest/1136/problem/C

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
    int n,m; cin>>n>>m;
    int a[n][m], b[n][m];

    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>b[i][j];

    map<int, vector<int> > ma;
    map<int, vector<int> > mb;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ma[i+j].push_back(a[i][j]);
            mb[i+j].push_back(b[i][j]);
        }
    }

    for(auto k : ma){
        auto key=k.first;
        vector<int> va=ma[key];
        vector<int> vb=mb[key];
        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end());
        if(va!=vb){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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
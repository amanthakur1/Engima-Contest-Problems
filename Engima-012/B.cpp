// https://codeforces.com/contest/1248/problem/A


/*Few Months of Focus And Hardwork can put you Many Years Ahead in Your Life.*/
#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int main(){
    sync
    // Write code from here
    test(t){
        ll n; cin>>n;
        ll ne=0,no=0;
        for(ll i=0;i<n;i++){
            ll x; cin>>x; if(x&1) no++; else ne++;
        }
        ll m; cin>>m;
        ll me=0,mo=0;
        for(ll i=0;i<m;i++){
            ll x; cin>>x; if(x&1) mo++; else me++;
        }
        cout<<(ne*me + mo*no) <<endl;
    }
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
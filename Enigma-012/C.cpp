// https://codeforces.com/contest/1248/problem/B

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
    ll n; cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    ll i=0,j=n-1;
    ll x=0,y=0;
    ll t=1;
    while(i<=j){
        if(t) x+=ar[j--],t=0;
        else y+=ar[i++],t=1;
    }
    
    cout<<(x*x + y*y);
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
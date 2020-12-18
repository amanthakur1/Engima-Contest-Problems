/*
https://codeforces.com/contest/1249/problem/A
*/

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
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll k=0;
        for(ll i=1;i<n;i++) if(abs(a[i] - a[i-1]) == 1) { k=1; break; }
        cout<<( k ? 2 :1 )<<endl;
    }
    
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
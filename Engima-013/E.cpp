// https://codeforces.com/contest/1373/problem/D

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

// kadane's algo    
ll kd(vector<ll> a){
    ll mh=0;
    ll mf=INT_MIN;
    for(ll i=0;i<a.size();i++){
        mh+=a[i];
        mh=max(mh, a[i]);
        mf=max(mf, mh);
    }
    return mf;
}

int main(){
    sync
    // Write code from here
    test(t){
        ll n ;cin>>n;
        ll a[n];
        ll ans=0;
        for(ll i=0;i<n;i++){ 
            cin>>a[i];
            if(i%2==0) ans+=a[i];
        }

        vector<ll> ev;
        vector<ll> od;
        for(ll i=0;i<n-1;i+=2){
            ev.push_back(a[i+1] - a[i]);
        }
        for(ll i=1;i<n-1;i+=2){
            od.push_back(a[i] - a[i+1]);
        }
        // using kadane's algo for maximum profit on reversing 
        cout<<ans + max({kd(ev), kd(od), 0LL})<<endl;
    }
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
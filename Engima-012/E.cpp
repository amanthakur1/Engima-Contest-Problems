// https://codeforces.com/contest/1249/problem/C2


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
    ll pre[40];
    ll nm=1;
    for(ll i=0;i<=39;i++){ // precomputing till 10^18
        pre[i]=nm;
        nm*=3;
    }

    test(t){
        ll n; cin>>n;
        ll ans=0,i=0;

        while(ans < n) ans+=pre[i++];   // adding all till (ans < n)
        
        while(i>=0){
            if(ans - pre[i] >= n) ans-=pre[i];  // Now removing extras like 3^i , 3^ i-1 , 3^ i-2
            i--;
        }
        cout<<ans<<endl;

    }
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
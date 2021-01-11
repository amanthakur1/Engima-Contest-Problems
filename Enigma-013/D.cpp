// https://codeforces.com/contest/1409/problem/C

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
        ll n, x, y;
        cin>>n>>x>>y;
        if(n==2){ cout<<x<<" "<<y<<endl; continue; }
        ll dif=y-x;
        ll nd=n-1;
        while(dif % nd !=0){
            nd--;
        }   
        
        ll k=dif/nd;
        ll i=0;
        ll l=y;
        while(i<n){
            if(l<=0) break;
            cout<<l<<" ";
            l-=k;
            i++;
        }
        while(i<n){
            y+=k;
            cout<<y<<" ";
            i++;
        }

        cout<<endl;

        
    }
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
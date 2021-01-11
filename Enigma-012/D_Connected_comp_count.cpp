// https://codeforces.com/contest/1249/problem/B2

/*Few Months of Focus And Hardwork can put you Many Years Ahead in Your Life.*/
#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+15;

ll n;
vector<ll> adj[N];
bool vis[N];
ll ans[N];
ll cnt=0;
void dfs(int node){
    vis[node]=true;
    cnt++;
    for(auto x:adj[node]){
        if(!vis[x]) dfs(x);
    }
    ans[node]=cnt;
}

int main(){
    sync
    // Write code from here
    test(t){
        cin>>n;
        for(ll i=0;i<n+10;i++) adj[i].clear(), vis[i]=false, ans[i]=0;
        for(int i=0;i<n;i++){ 
            ll x; cin>>x;
            adj[i+1].push_back(x);
        }
        for(ll i=1;i<=n;i++){
            if(!vis[i]){
                cnt=0;
                dfs(i);
            }
        }

        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;

    }
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
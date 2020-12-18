/*Few Months of Focus And Hardwork can put you Many Years Ahead in Your Life.*/
#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+15;

// ll n;
// vector<ll> adj[N];
// bool vis[N];
// ll ans[N];
// ll cnt=0;
// void dfs(int node){
//     vis[node]=true;
//     cnt++;
//     for(auto x:adj[node]){
//         if(!vis[x]) dfs(x);
//     }
//     ans[node]=cnt;
// }

int main(){
    sync
    // Write code from here
    test(t){
        int n, x; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> x;
            a[i] = x - 1;
        }
    
        bool vis[n] = {0};
        int answer[n] = {0};
    
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                int count = 1, node = i;
                vector<int> v; v.pb(node);
                vis[i] = 1;
    
                while (a[node] != i) {
                    node = a[node];
                    v.pb(node);
                    vis[node] = 1;
                    count++;
                }
    
                for (auto k : v) answer[k] = count;
            }
        }
    
    
        for (auto k : answer) cout << k << " ";
        cout<<endl;

    }
    
    
    return 0;
}
/*Don't Underestimate the Power of Consistency And Desire.*/
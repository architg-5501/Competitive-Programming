#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

#define ll int

bool isLeaf(ll node, ll parent, vector<ll> adj[])
{
    if (adj[node].size() == 1 && parent == adj[node][0])
    {
        return 1;
    }
    return 0;
}

void dfs(ll node, ll parent, ll &cat, ll cnt, vector<ll> adj[], vector<ll> &vis, vector<ll> &vec, ll &ans)
{
    vis[node] = 1;
    if (vec[node-1])
        cnt++;
    else cnt=0;
    if (cnt > cat)
        return;
    if (isLeaf(node, parent, adj))
    {
        ans++;
        return;
    }

    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            dfs(nbr, node, cat, cnt, adj, vis, vec, ans);
        }
    }

    return;
}

int main()
{
    ll n;
    ll cat;
    cin >> n >> cat;
    vector<ll> vec;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        vec.push_back(a);
    }

    vector<ll> adj[n+1];
    vector<ll> vis(n+1, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll ans = 0;

  
     dfs(1, -1, cat, 0, adj, vis, vec, ans);
     
    cout << ans << endl;
    return 0;
}
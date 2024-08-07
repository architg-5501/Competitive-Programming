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

void dfs1(ll node, ll parent, vector<ll> adj[], vector<ll> &vis1)
{
    vis1[node] = 1;

    for (auto nbr : adj[node])
    {
        if (!vis1[nbr])
        {
            (dfs1(nbr, node, adj, vis1));
        }
    }

    return;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> adj[n + 1];

    for (ll i = 0; i < m; i++)
    {
        ll u;
        ll v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> vis1(n + 1);

    ll ans1 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() != 2 && !vis1[i])
            dfs1(i, -1, adj, vis1);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (!vis1[i])
        {
            dfs1(i, -1, adj, vis1);
            ans1++;
        }
    }

    cout << ans1 << endl;
    return 0;
}
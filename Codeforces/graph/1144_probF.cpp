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

#define ll long long

bool dfs(ll node, ll col, vector<bool> &color, vector<ll> adj[], vector<bool> &vis)
{
    vis[node] = 1;
    color[node] = col; // Set the color of the current node.

    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            bool ans = dfs(nbr, !col, color, adj, vis); // Visit the neighbor node.
            if (!ans)
                return 0;
        }
        if (col == color[nbr]) // Check if the neighbor has the same color.
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    ll n, m;
    cin >> n >> m;

    vector<ll> adj[n + 1];
    vector<bool> color(n + 1);
    vector<bool> vis(n + 1);
    vector<vector<ll>> edges;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
    }

    ll col = 0;
    bool ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans = dfs(i, col, color, adj, vis);
            if (!ans)
                break;
        }
    }

    if (!ans)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        string ans = "";
        cout << "YES" << endl;
        for (ll i = 0; i < m; i++)
        {
            if (color[edges[i][0]] == 0)
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
        return 0;
    }

    return 0;
}
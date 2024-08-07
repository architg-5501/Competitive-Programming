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
#define pii pair<int, int>

void dijkstra(int V, vector<pii> adj[], int S, vector<int> &dis, vector<int> &parent)
{
    set<pair<int, int>> st;
    st.insert({0, S});

    parent[S] = -1;
    dis[S] = 0;
    for (int i = 0; i < V; i++)
        parent[i] = i;
    while (!st.empty())
    {
        pair<int, int> front = *st.begin();
        int node = front.second;
        int steps = front.first;
        st.erase(front);
        for (auto it : adj[node])
        {
            int nbr = it.first;
            int distance = it.second;
            if (dis[nbr] > dis[node] + distance)
            {
                if (dis[nbr] != 1e9)
                {
                    st.erase({dis[nbr], nbr});
                }
                dis[nbr] = dis[node] + distance;
                parent[nbr] = node;
                st.insert({dis[nbr], nbr});
            }
        }
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;

    vector<pii> adj[n + 1];

    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        if (w < 0)
        {
        }
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<ll> dist(n + 1, 1e9);
    vector<ll> parent(n + 1);
    for (ll i = 0; i < n + 1; i++)
    {
        parent[i] = i;
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[1] = 0;
    pq.push({1, 0});

    while (!pq.empty())
    {
        pii front = pq.top();
        ll node = front.first;
        ll steps = front.second;

        pq.pop();
        for (auto it : adj[node])
        {
            ll nbr = it.first;
            ll cost = it.second;

            if ((steps + cost) < dist[nbr])
            {
                dist[nbr] = cost + steps;
                parent[nbr] = node;
                pq.push({nbr, cost + steps});
            }
        }
    }
    // dijkstra(n, adj, 1, dist, parent);

    if (dist[n] >= 1e9)
    {
        cout << "-1" << endl;
    }
    else
    {
        ll temp = n;
        vector<ll> res;
        parent[1] = -1;
        while (temp != -1)
        {
            res.push_back(temp);
            temp = parent[temp];
        }

        ll t = res.size() - 1;

        for (ll i = t; i >= 0; i--)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

void dfs (int src, int par, vector<vector<int>>& adj, vector<int>& depth)
{
    for (auto child : adj[src])
    {
        if (par == child)
            continue;

        depth[child] = depth[src]+1;
        dfs (child, par, adj, depth);
    }
}

void solve ()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n+2);
    for (int i = 2; i <= n; i++)
    {
        int x;cin >> x;
        adj[x].push_back(i);
    }
    
    int m; cin >> m;
    vector<int> v(m);
    for (auto &x : v) cin >> x;

    vector<int> depth(n+2);
    dfs (1, 0, adj, depth);

    int mn= INT_MAX, near_node = -1;
    for (auto node : v)
    {
        if (depth[node] < mn)
        {
            near_node = node;
            mn = depth[node];
        }
    }

    cout << m-1 << " ";
    for (auto x : v)
    {
        if (x == near_node)
            continue;
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while (t--)
        solve ();

    return 0;
}


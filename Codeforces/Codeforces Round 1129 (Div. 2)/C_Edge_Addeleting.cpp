#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

vector<int> bfs (int src, vector<vector<int>> &adj_list, int n)
{
    vector<int> dis(n+1, -1);
    queue<int> q;
    q.push(src);
    dis[src] = 0;

    while (!q.empty ())
    {
        int par = q.front ();
        q.pop ();

        for (auto child : adj_list[par])
        {
            if (dis[child] == -1)
            {
                dis[child] = 1+dis[par];
                q.push (child);
            }
        }
    }

    return dis;
}

void solve (int tc)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj_list(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    vector<int> dis1 = bfs (1, adj_list, n);
    vector<int> dis2 = bfs (n, adj_list, n);

    int ans = dis2[1];

    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;
        if (dis2[x] != dis2[1] + dis1[x])
            ans = max (ans, dis2[x]+1);
    }
    
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve (i);

    return 0;
}


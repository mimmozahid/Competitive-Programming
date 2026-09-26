#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n), pos(n+1);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
        pos[v[i]] = i;
    }

    vector<vector<int>> adj_list(n+1);
    vector<int> deg (n+1);

    for (int i = 1; i < n; i++)
    {
        if (pos[i] < pos[i+1])
        {
            adj_list[i].push_back (i+1);
            deg[i+1]++;
        }
        else
        {
            adj_list[i+1].push_back(i);
            deg[i]++;
        }
    }
    
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= n; i++)
    {
        if (deg[i] == 0)
            pq.push(i);
    }
    
    vector<int> ans;

    while (!pq.empty ())
    {
        int x = pq.top ();
        pq.pop ();

        ans.push_back (x);

        for (auto child : adj_list[x])
        {
            deg[child]--;
            if (deg[child] == 0)
            {
                pq.push (child);
            }
        }
    }
    
    for (auto x : ans)
        cout << x << " ";
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


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

struct DSU
{
    vector<int> par, rank, siz, mini, maxi;
    int component;

    DSU (int n) : par(n+1), rank (n+1, 0), siz (n+1, 1), component(n), mini (n+1, -1), maxi (n+1, -1)
    {
        for (int i = 1; i <= n; i++)
        {
            par[i] = i;
            mini[i] = maxi[i] = i;
        }
    }

    int find (int i)
    {
        return par[i] == i ? i : (par[i] = find (par[i]));
    }

    bool isSame (int u, int v)
    {
        return find(u) == find (v);
    }

    int getSize (int v)
    {
        return siz[find (v)];
    }

    int cntComponent()
    {
        return component;
    }

    void _union (int u, int v)
    {
        if ((u = find (u)) == (v = find (v)))
        {
            return;
        }
        else
        {
            component--;
        }

        if (rank[u] > rank[v])
        {
            swap (u, v);
        }
        else if (rank[u] == rank[v])
        {
            rank[v]++;
        }

        par[u] = par[v];
        siz[v] += siz[u];
        mini[v] = min (mini[u], mini[v]);
        maxi[v] = max (maxi[u], maxi[v]);
    }
};

void solve ()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    DSU d(n);
    for (int i = 1; i <= n; i++)
    {
        if (i + x <= n)
            d._union (i, i+x);
        if (i + y <= n)
            d._union (i, i+y);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!d.isSame (i, v[i]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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


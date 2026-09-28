#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

int query (int u, int v, int d)
{
    cout << "? " << u << " " << v << " " << d << endl;
    int x; cin >> x;
    return x;
}

void solve ()
{
    int n;
    cin >> n;

    int node01 = 1, dis = 1;
    for (int i = 1; i <= n; i++)
    {
        if (dis <= n && query (1, i, dis))
        {
            dis++;
            node01 = i;
            i--;
        }
    }
    int node02 = 1;
    for (int i = 1; i <= n; i++)
    {
        if (dis <= n && query (node01, i, dis))
        {
            dis++;
            node02 = i;
            i--;
        }
    }
    cout << "! " << node01 << " " << node02 << " " << dis-1 << endl;
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


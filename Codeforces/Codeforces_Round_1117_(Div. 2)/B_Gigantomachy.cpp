#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    ll ply01 = 0, ply02 = 0;
    for (int i = 0; i < n-1; i++)
    {
        ply01 += (a[i]-a[i+1]+1);
    }
    
    ply01 += a[n-1];
    for (int i = 0; i < m-1; i++)
    {
        ply02 += (b[i]-b[i+1]+1);
    }
    ply02 += b[m-1];

    if (ply01 >= ply02) cout << 1 << endl;
    else cout << 2 << endl;
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


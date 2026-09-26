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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int > mp;
    int mx = 0;
    for (auto &x : v)
    {
        cin >> x;
        mp[x]++;
        mx = max (mx, mp[x]);
    }

    ll ans = 0;
    
    for (auto [v, c] : mp)
    {
        int a = n - c;
        c = min (c, a+2);
        ans += (c*v);
    }

    cout << ans << endl;
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

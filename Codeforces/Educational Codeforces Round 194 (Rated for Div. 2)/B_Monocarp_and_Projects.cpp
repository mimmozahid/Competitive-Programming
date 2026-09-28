#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 


void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    ll a = y-x;

    ll ans=0, i = 0;

    while (i < k && x+i <= a)
    {
        ans += a % (x+i);
        i++;
    }
    ans += (k-i)*a;
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


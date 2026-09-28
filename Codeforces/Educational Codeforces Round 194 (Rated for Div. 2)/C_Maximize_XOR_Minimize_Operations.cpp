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
    ll x , y;
    cin >> x >> y; //! x -> decrease, y -> increase...

    ll ans = x + y, c = 0;
    if (x == 0)
    {
        cout << ans << " " << 0 << endl;
        return;
    }

    int msb = 1LL << __lg (ans);

    for (int bit = msb; bit ; bit >>= 1)
    {
        if ((ans & bit ) && (c+bit <= x))
        {
            // cout << bit << endl;
            c += bit;
        }
    }
    
    cout << ans << " " << x-c << endl;
}

void solution ()
{
    ll x, y;
    cin >> x >> y;

    ll ans = x+y, c = 0;
    if (x == 0)
    {
        cout << ans << " " << 0 << endl;
        return;
    }
    ll val = 0;
    while ((x != 0) && (ans != val))
    {
        val = x ^ y;
        if (val == ans)
        {
            break;
        }
        x--;
        y++;
        c++;
    }

    cout << ans << " " << c << endl;
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


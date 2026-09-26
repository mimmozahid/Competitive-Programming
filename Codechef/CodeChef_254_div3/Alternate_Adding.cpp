#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 


#define MOD 998244353

int power (int x, int n)
{
    int ans = 1%MOD;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans%MOD * x%MOD);
        }
        x = 1LL * x * x % MOD;
        n>>=1;
    }
    return ans;
}



void solve()
{
    //! wrong aproach...

    int n;
    cin >> n;

    pbds<pair<ll, int>> p;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        p.insert({x, i});
    }

    ll op = 0;
    int dum = n;

    while (!p.empty())
    {
        auto f = p.begin();
        auto l = prev(p.end());

        ll f_val = f->first;
        ll l_val = l->first;

        if (f_val == l_val)
            break;

        if (f_val < 0 && l_val > 0)
        {
            p.erase(f);
            p.erase(l);

            p.insert({f_val + l_val, dum++});

            if (abs(f_val) > abs (l_val))
                op+=abs (l_val);
            else
                op += abs(f_val);
        }
        else
        {
            break;
        }
    }

    ll sum = 0;

    for (auto x : p)
    {
        sum += abs(x.first);
    }

    cout << op + sum << '\n';
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


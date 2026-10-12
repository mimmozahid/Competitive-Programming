#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

struct nd {
    ll a, b, c;
};

void solve (int tc)
{
    ll n, K;
    cin >> n >> K;

    vector<nd> v(n);
    for (auto &x : v)
    {
        cin >> x.a >> x.b >> x.c;
    }

    auto ok = [&] (ll md) -> bool
    {
        ll k = K;
        for (int i = 0; i < n; i++)
        {
            ll sum = v[i].a + v[i].b + v[i].c;
            if (sum >= md) continue;

            ll need = LLONG_MAX;
            if (v[i].a > v[i].b || v[i].b > v[i].c || v[i].a > v[i].c)
            {
                need = md-sum;
            }
            else
            {
                if (v[i].a < v[i].c)
                {
                    need = min (need, 2*(v[i].b-v[i].a+1) + (md-sum));
                }
                if (v[i].a < v[i].b)
                {
                    need = min (need, 2*(v[i].c-v[i].a+1) + (md-sum));
                    need = min (need, 2*(v[i].c-v[i].b+1) + (md-sum));
                }
            }

            if (need > k)
                return false;
            k-=need;
        }
        return true;
    };

    ll ans = LLONG_MIN;
    ll l = -2e18;
    ll r = 2e18;

    while (l <= r)
    {
        ll mid = l + (r-l)/2;
        if (ok (mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
            r = mid-1;
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


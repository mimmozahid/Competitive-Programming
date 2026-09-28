#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(k);
    for (auto &x : v) cin >> x;

    sort (v.rbegin(), v.rend());

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = 0; i < mid; i++)
        {
            if (v[i] <= cnt) return false;
            cnt += (n-v[i]);
        }
        return true;
    };

    ll l = 0, r = k, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r-l)/2;
        if (ok (mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--)
        solve ();
    
    return 0;
}
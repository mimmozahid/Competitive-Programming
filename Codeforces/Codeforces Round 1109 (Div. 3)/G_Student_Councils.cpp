#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll k, n, total = 0;
    cin >> k >> n;
    vector<ll> v(n);
    for (auto &x : v)
    {
        cin >> x;
        total += x;
    }

    auto ok = [&](ll cuncil)
    {
        ll cnt = 0;
        for (auto x : v)
        {
            cnt += min (x, cuncil);
        }

        return cnt >= cuncil*k;
    };

    ll l = 0, r = 1e9, ans = 0;

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
    
    return 0;
}
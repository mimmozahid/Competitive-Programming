#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    ll ans = 0;

    ll mx = v[0];

    for (int i = 1; i < n; i++)
    {
        mx = max(mx, v[i-1]);

        if (v[i] < mx)
            ans += mx - v[i];
    }

    cout << ans << '\n';
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
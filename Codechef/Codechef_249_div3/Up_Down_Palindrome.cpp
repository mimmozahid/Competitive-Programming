#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    ll mx = LLONG_MIN, mn = LLONG_MAX;
    bool flg = false;

    for (int i = 0; i < n/2; i++)
    {
        int j = n-1-i;

        ll a = v[i], b = v[j];
        if (a == b)
            continue;

        if (llabs (a-b) != 2)
        {
            cout << "No" << endl;
            return;
        }

        flg = true;

        ll p = min (a, b);
        mn = min (mn, p);
        mx = max (mx, p);
    }

    if (!flg || (mx-mn) <= 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
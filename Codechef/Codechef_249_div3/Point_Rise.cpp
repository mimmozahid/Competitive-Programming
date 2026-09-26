#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using dd = double;


double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return abs(
        x1 * (y2 - y3) +
        x2 * (y3 - y1) +
        x3 * (y1 - y2)
    ) / 2.0;
}

void solve ()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    dd ans = LLONG_MAX;
    for (int i = 0; i < n-3; i++)
    {
        ans = min (triangleArea ((dd)v[i], 0.0, (dd)v[i+1], 1.0, (dd)v[i+2], 2.0), ans);
        ans = min (triangleArea ((dd)v[i], 1.0, (dd)v[i+1], 2.0, (dd)v[i+2], 0.0), ans);
        ans = min (triangleArea ((dd)v[i], 2.0, (dd)v[i+1], 0.0, (dd)v[i+2], 1.0), ans);
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
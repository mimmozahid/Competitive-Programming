#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPosible (vector<int>& v, int m, int d)
{
    ll p = 0;

    for (auto x : v)
    {
        p += x/d;
    }

    return (p >= m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int mx = 0;
    vector<int> v(n);
    for (auto &x : v) cin >> x, mx = max (mx, x);

    int l = 1, r = mx, ans = 0;

    while (l <= r)
    {
        int mid = (l + r)/2;

        if (isPosible (v, m, mid))
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
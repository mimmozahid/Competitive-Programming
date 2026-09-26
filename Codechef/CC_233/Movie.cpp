#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;

    int cmbo = min(n, m);

    int ans = cmbo * c;

    ans += abs(n - cmbo) * a;

    ans += abs(m - cmbo) * b;

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
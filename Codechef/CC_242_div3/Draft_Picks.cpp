#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> sum(n + 1, 0);

    int card = k;
    bool forward = true;

    while (card > 0)
    {
        if (forward)
        {
            for (int p = 1; p <= n && card > 0; p++)
            {
                sum[p] += card;
                card--;
            }
        }
        else
        {
            for (int p = n; p >= 1 && card > 0; p--)
            {
                sum[p] += card;
                card--;
            }
        }

        forward = !forward;
    }

    ll ans = 0;

    for (int i = 1; i <= n; i++)
        ans = max(ans, sum[i]);

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}
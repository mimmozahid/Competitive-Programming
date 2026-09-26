#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;

    int ans = abs (a-b);
    int cnt = 0;

    while (a > 0 || b > 0)
    {
        if (a > b)
        {
            a/=x;
            cnt++;
        }
        else
        {
            b/=x;
            cnt++;
        }
        int cur = cnt+abs(a-b);
        ans = min (ans, cur);
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
        solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int ans = max({a, b, c, d});

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
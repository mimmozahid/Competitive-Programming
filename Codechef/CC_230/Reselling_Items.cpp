#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &a : v) cin >> a;

    sort (v.rbegin(), v.rend());

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] > 5)
        {
            ans += v[i]-5;
        }
    }
    
    for (int i = k; i < n; i++)
    {
        if (v[i] > 10)
        {
            ans += v[i] - 10;
        }
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
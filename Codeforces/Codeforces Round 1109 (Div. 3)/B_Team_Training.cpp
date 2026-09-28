#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    sort (v.rbegin (), v.rend ());

    int mn = v[0], ans = 0, len = 1;
    for (int i = 0; i < n; i++)
    {
        mn = min (v[i], mn);
        if (mn * len >= x)
        {
            len = 1;
            ans++;
        }
        else
        {
            len++;
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
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(3);
    for (int &x : v) cin >> x;

    int ans = 0;

    while (1)
    {
        sort (v.begin (), v.end ());
        if (v[0] == v[1] || v[1] == v[2])
        {
            cout << ans << endl;
            return;
        }

        v[0]++;
        v[2]--;
        ans++;
    }
    
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
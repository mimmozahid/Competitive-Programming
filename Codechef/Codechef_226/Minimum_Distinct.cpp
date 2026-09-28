#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        mp[v[i]]++;
    }

    mp.erase(v[0]);
    vector<pair<int, int>> cnt;
    for (auto [v, c] : mp)
        cnt.push_back({c,v});

    sort (cnt.begin(), cnt.end());

    int ans = 1;

    for (auto [c, v] : cnt)
    {
        int mn = min (k, c);
        mp[v] -= mn;

        k -= mn;

        if (mp[v] == 0) mp.erase(v);
        if (k == 0) break;
    }

    cout << ans+(int)mp.size() << endl;
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
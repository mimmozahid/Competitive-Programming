#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (auto &x : v) cin >> x;

    map<int, int> mp;
    for (auto x : v)
    {
        mp[x]++;
    }

    set<int> available;
    for (int i = 0; i <= n; i++)
    {
        int must_delete = mp[i];
        int mis_value = i - available.size();

        int ans = max (must_delete, mis_value);
        cout << ans << " ";

        if (mp[i])
        {
            available.insert(i);
        }
    }
    cout << endl;
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
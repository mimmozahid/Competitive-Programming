#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int z = abs(a[i]-b[i]);
        if (z == 0) continue;

        mp[z]++;
    }

    if ((int)mp.size() <= 1)
    {
        for (auto [val, cnt] : mp)
        {
            if (cnt == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            break;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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
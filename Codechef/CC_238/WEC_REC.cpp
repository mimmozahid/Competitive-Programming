#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, x , k;
    cin >> n >> x >> k;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    map<int, int, greater<int>> mp;
    for (auto x :v)
    {
        mp[x]++;
    }
    
    int clg = 0, cnt = 0;

    for (auto[val, c] : mp)
    {
        clg += c;
        cnt++;

        if (cnt == k) break;
    }

    cout << min (clg, x) << endl;
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
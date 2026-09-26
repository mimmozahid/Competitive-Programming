#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    map <int, int> mp;
    int i = 1;
    for (auto x : v)
    {
        int val = x-i;
        mp[val]++;
        i++;
    }

    int ans = 0;
    for (auto[val, cnt] : mp)
    {
        ans += (cnt*(cnt-1))/2;
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
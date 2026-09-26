#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    map<ll, ll> mp;

    for (int i = 1; i <= n; i++)
    {
        int k = v[i] - i;
        mp[k]++;
    }
    ll ans = 0;
    for (auto [k, x] : mp)
    {
        ans += (x * (x - 1))/2;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve ();
    
    return 0;
}
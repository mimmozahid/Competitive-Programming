#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve ()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    ll ans = 0, i= 0;
    for (auto x : v)
    {
        if ((i&(n-1)) == i)
            ans ^= x;

        i++;
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n, c;
    cin >> n >> c;

    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    ll a = 0, b = 0;

    if (n < 2)
    {
        cout << v[0] << endl;
        return;
    }

    int l = 0;
    for (int r = 0; r < n;)
    {
        if (v[r] < c)
        {
            if (r + 1 < n)
            {
                a += max(v[r], v[r+1]);
                a -= c;
                r += 2;
            }
            else
            {
                a += v[r];
                a -= c;
                r++;
            }
        }
        else
        {
            a += v[r];
            a -= c;
            r++;
        }
    }
    
    if (a < 0)
        cout << 0 << endl;
    else
        cout << a << endl;
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
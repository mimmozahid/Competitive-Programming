#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve ()
{
    ll n, k, s, m;
    cin >> n >> k >> s >> m;

    if (1 < m && m < n)
    {
        bool flg = false;

        for (int x = 0; x <= k; x++)
        {
            ll y = k-x;
            ll l = x*1 + y * (m+1);
            ll h = x*(m-1) + y*n;

            if (l <= s && s <= h)
            {
                flg = true;
                break;
            }
        }
        
        if (flg) cout << 0 << endl;
        else cout << 1 << endl;
    }
    else if (m == 1)
    {
        for (int x = 0; x <= k; x++)
        {
            ll y = k-x;
            ll l = 2*y;
            ll h = n*y;

            ll more_need = s - x*1;

            if (l <= more_need && more_need <= h)
            {
                cout << x << endl;
                break;
            }
        }
    }
    else if (m == n)
    {
        for (int x = 0; x <= k; x++)
        {
            ll y = k-x;
            ll l = y;
            ll h = (n-1)*y;

            ll more_need = s - x*n;

            if (l <= more_need && more_need <= h)
            {
                cout << x << endl;
                break;
            }
        }
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
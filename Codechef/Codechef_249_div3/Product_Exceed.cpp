#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll x, y, p;
    cin >> x >> y >> p;

    ll ans = INT_MAX;

    for (int i = 0; i <= 200; i++)
    {
        for (int j = 0; j <= 200; j++)
        {
            if (((x+i) * (y+j)) >= p)
                ans = min(ans, (ll)i+j);
        }
        
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
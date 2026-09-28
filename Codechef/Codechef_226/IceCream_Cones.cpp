#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int x, y, n;
    cin >> x >> y >> n;

    int ans = y*n;

    if ((x-ans )> 0)
    {
        cout << x - ans << endl;
    }
    else
        cout << 0 << endl;
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
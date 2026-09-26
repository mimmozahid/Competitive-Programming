#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x > 0 && y >= z)
    {
        cout << -1 << endl;
        return;
    }

    int a = z-y;
    cout << (x + a -1)/ a << endl;
    
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
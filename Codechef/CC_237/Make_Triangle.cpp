#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int x , y, z;
    cin >> x >> y >> z;

    int ans = 0;
    while (!(x+y > z && y + z > x && x+z>y))
    {
        int mn = min({x, y, z});
        
        if (mn == x) x++;
        else if (mn == y) y++;
        else z++;
    
        ans++;
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
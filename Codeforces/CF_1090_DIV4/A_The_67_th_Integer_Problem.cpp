#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, ans = 0;
    cin >> n;

    for (int i = -67; i <= 67; i++)
    {
        ans = min(n, i);
        if (ans = n)
        {
            ans += 1;
            break;
        }
    }
    
    if (ans>67)
        cout << 67 << endl;
    else
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
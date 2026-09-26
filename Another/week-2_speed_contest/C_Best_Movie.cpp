#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    
    int r = 0, c = 0, ans = INT_MAX;
    while (t--)
    {
        cin >> r >> c;
        
        if (r >= 7)
        {
            if (c < ans)
            {
                ans = c;
            }
        }
    }
    
    if (ans == INT_MAX)
        ans = -1;
        
    cout << ans << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    
    return 0;
}
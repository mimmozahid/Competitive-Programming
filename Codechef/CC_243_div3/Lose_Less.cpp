#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int match, total_point;
    cin >> match >> total_point;

    int ans = match;

    for (int win = 0; win <= match; win++)
    {
        for (int drw = 0; drw <= match; drw++)
        {
            if (win + drw > match) continue;
            else
            {
                int cur_points = (win*3) + drw;
                int remain_match = match - win - drw;
                if (cur_points == total_point)
                    ans = min (ans, remain_match);
            }
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
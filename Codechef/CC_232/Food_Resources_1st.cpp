#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;   //! wrong approach,,,,

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    map<int, int> mp;

    for (auto x : v)
    {
        mp[x]++;
    }

    int ans = 0;

    for (auto[x, cnt] : mp)
    {
        if (x/m == 0)
        {
            int z = cnt/m;

            if (z != 0)
            {
                if (x > 1)
                {
                    ans += (z*x);
                }
                else
                    ans += cnt/m;
            }
        }
        if (x/m != 0)
        {
            ans += (x/m)*cnt;
        }
    }

    cout << ans << endl;
    
    return 0;
}
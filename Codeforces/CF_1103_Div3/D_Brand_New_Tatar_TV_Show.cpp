#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    map <int, int> mp;
    for (auto x : v) mp[x]++;

    string ans = "NO";

    for (int i = n; i > 0; i--)
    {
        if (mp[i] > 0)
        {
            // value ache
            if (mp[i]%2 == 0)
            {
                ans = "YES";
            }
            else
            {
                // jodi odd hoy, tahole link ache kina dekhte hobe.
                int cnt = 0;

                while (cnt < k)
                {
                    i--;

                    if (mp[i] > 0)
                    {
                        ans = "YES";
                        break;
                    }

                    cnt++;
                }
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
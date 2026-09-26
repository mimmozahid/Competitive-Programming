#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                int p = (n-j-1) + i;
                
                ans = min(p, ans);
            }
        }
    }
    
    if (ans == INT_MAX)
        cout << -1 << endl;
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
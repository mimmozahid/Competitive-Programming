#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int target_val = 0, ans = 0;
    for (auto x : v) target_val |= x;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != target_val)
        {
            if (i+1 < n)
                v[i+1] = v[i] | v[i+1];
                
            ans++;
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
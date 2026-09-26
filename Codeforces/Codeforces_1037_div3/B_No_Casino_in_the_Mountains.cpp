#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, k;
    cin >> n >> k;

    vector<int>v (n);
    for (auto &x : v) cin >> x;

    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (!v[i])
        {
            cnt++;
        }
        else if (v[i] && cnt != k)
        {
            cnt = 0;
        }

        if (cnt == k)
        {
            ans++;
            cnt = 0;
            i++;
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
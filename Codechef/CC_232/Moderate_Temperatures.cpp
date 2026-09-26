#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x: v)
        cin >> x;

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    int ans = 0;

    for (auto x : v)
        if (x != mx && x != mn)
            ans++;

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
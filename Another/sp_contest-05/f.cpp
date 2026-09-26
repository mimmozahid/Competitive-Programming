#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort (v.begin(), v.end());
    
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += abs(v[i] - i);
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
#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;

    vector<int> sVal;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            sVal.push_back(v[i]);
    }
    
    if (sVal.size() < k)
    {
        cout << -1 << endl;
        return;
    }

    sort(sVal.begin(), sVal.end());
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += sVal[i];
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
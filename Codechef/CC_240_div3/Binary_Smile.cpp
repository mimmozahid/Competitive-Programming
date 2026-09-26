#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    vector<int> idx_s, idx_t;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') idx_s.push_back(i);
        if (t[i] == '1') idx_t.push_back(i);
    }

    if (idx_s.size() != idx_t.size())
    {
        cout << -1 << endl;
        return;
    }
    
    int ans = 0;

    for (int i = 0; i < (int)idx_s.size(); i++)
    {
        if (idx_s[i] != idx_t[i]) ans++;
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
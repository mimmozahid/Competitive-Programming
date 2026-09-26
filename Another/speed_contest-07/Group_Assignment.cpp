#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    map <int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    
    bool flg = true;

    for (auto [val, cnt] : mp)
    {
        if (cnt % val != 0)
        {
            flg = false;
            break;
        }
    }

    cout << (flg ? "YES" : "NO") << endl;
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
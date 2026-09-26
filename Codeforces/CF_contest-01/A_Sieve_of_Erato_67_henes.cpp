#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    bool flg = false;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val == 67)
        {
            flg = true;
        }
    }
    
    if (!flg)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    
    return 0;
}
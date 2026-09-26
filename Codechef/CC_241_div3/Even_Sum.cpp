#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, total = 0;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        total += x;
    }

    bool flg = false;

    if (total%2 == 0)
    {
        for (auto x : v)
        {
            if (x%2 == 0)
            {
                flg = true;
                break;
            }
        }
    }
    else
    {
        for (auto x : v)
        {
            if (x%2 != 0)
            {
                flg = true;
                break;
            }
        }
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
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
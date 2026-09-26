#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n+1), s;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (v[i] == 1)
            s.push_back(i);
    }
    

    if (s.empty())
    {
        cout << "No" << endl;
        return;
    }

    bool ok = true;

    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i]-s[i-1] <= k)
        {
            ok = false;
            break;
        }
    }
    
    if (!ok)
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        bool fnd = false;

        for (auto x : s)
        {
            if (abs(i-x) <= k)
            {
                fnd = true;
                break;
            }
        }

        if (!fnd)
        {
            ok = false;
            break;
        }
    }
    
    cout << (ok ? "Yes" : "No") << endl;
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
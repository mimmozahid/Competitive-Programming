#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n = 3;
    vector<int> v(n);
    for (auto &x: v) cin >> x;

    int cnt = 0;

    for (auto x : v)
    {
        if (x >= 50)
        {
            cnt++;
        }
    }

    if (cnt >= 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
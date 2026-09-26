#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    sort (v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        if (v[i] % c == 0)
        {
            cout << v[i] << endl;
            return;
        }
    }
    cout << 0 << endl;
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    if (n&1)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; i+=2)
    {
        if (v[i] <= v[i+1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    
    sort (v.begin(), v.end());

    if (abs(v[n/2] - v[(n/2)-1]) >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
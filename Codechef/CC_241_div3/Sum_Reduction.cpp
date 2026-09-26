#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;
    int sum = 0, or_total = 0;
    for (auto x : v)
    {
        sum += x;
        or_total |= x;
    }

    if (sum == or_total)
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
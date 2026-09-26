#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x: a) cin >> x;

    map<int, int> mp;
    int c = 0;
    for (auto x : a)
    {
        mp[x]++;
        c = max (mp[x], c);
    }

    cout << n-c+1 << endl;
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
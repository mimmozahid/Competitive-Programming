#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    int mx = -1, mn = 100;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mx = max (a, mx);
        mn = min (a, mn);
    }
    
    cout << mx-mn+1 << endl;
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
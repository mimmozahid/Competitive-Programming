#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    v[0] = 1;
    ll a = 1, b = 2;
    for (int i = 1; i < n; i++)
    {
        v[i] = a * b;
        a += 2;
        b += 2;
    }
    
    for (auto x : v) cout << x << " ";
    cout << endl;
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
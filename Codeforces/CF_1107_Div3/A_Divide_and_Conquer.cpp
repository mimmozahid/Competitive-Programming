#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int a, b;
    cin >> a >> b;

    if (__gcd (a, b) == a)
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

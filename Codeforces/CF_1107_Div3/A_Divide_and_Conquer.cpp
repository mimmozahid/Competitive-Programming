#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int x, y;
    cin >> x >> y;

    if (x%y == 0)
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
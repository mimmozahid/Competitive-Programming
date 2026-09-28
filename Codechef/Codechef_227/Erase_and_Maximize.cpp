#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, s;
    cin >> n >> s;

    int xtr = max (0, s-5*n);
    cout << 6*n - xtr << endl;
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
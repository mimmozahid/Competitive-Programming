#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, a, b;
    cin >> n >> a >> b;

    while (n >= a)
    {
        n += b;

        n -= a;
    }

    cout << n << endl;
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
#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    double a, b;
    cin >> a >> b;

    while (1)
    {
        int aa = a, bb = b;
        if (a < b)
        {
            b /= 2;
            bb /=2;
        }
        if (a > b)
        {
            a /= 2;
            aa /=2;
        }

        if (a == b)
        {
            cout << "YES" << endl;
            return;
        }

        if ((a > aa) || (b > bb))
        {
            cout << "NO" << endl;
            return;
        }

        
    }
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
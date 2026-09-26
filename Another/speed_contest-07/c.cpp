#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int a, b, c;
    cin >> a >> b >> c;

    int total = a + b+c;

    if (total%2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    int half = total/2;

    if (a == half || b == half || c == half || a+b == half || b+c == half || a+c == half)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
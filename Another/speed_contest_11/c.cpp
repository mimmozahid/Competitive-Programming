#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int a, k;
    cin >> a >> k;

    ll r = a%4;

    if (k == 0)
    {
        if (r == 0)
            cout << "Off" << endl;
        else
            cout << "On" << endl;
    }
    else
    {
        if (r == 0)
            cout << "On" << endl;
        else
            cout << "Ambiguous" << endl;
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
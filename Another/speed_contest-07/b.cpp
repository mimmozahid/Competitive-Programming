#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, x;
    cin >> n >> x;

    int ctt = n/10;

    cout << ctt*x << endl;
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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // input test case..

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int a_remainder = a%x;
        int p = (a/x) * y;
        int ans = a_remainder + p + b;

        cout << ans << endl;
    }
    
    return 0;
}
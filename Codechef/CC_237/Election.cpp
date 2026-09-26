#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int ans = (n/2) +1;

    if (ans >= m)
        cout << ans - m << endl;
    else
        cout << 0 << endl;
    
    return 0;
}
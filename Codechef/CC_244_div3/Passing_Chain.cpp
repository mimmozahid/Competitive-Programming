#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, k;
    cin >> n >> k;

    int ans = 1;
    for (int i = 1; i <= n; i+=k)
    {
        if (i+k <= n)
        {
            ans = i+k;
        }
    }
    cout << ans << endl;
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
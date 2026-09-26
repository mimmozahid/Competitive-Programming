#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n, k;
    cin >> n >> k;

    bool flg = false;
    int ans = 0;
    for (int i = n-1; i >= 0; i--)
    {
        ans ^= i;
        if (ans >= k)
        {
            flg = true;
            break;
        }
    }
    
    if (n == 1 && k == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (n==1 && k == 1)
    {
        cout << "YES" << endl;
        cout << 0 << endl;
        return;
    }
    
    if (!flg)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
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
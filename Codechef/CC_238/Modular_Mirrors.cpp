#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve ()
{
    ll n, m;
    cin >> n >> m;

    if ((n+1)%3 != 0)
    {
        cout << -1 << endl;
        return;
    }

    ll z = 1;

    for (int i = 1; i <= n; i++)
    {
        ll r = i%6;
        ll val ;
        
        if (r ==1 || r == 2)
        {
            val = z;
        }
        else if (r == 4 || r == 5)
            val = m-z;
        else
            val = 0;

        cout << val << " ";
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
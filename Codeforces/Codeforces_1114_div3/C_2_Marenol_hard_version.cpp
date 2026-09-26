#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "0" << endl;
        return;
    }

    int a_even = 0, a_odd = 0;
    int b_even = 0, b_odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            if (i%2 == 0) a_even++;
            else a_odd++;
        }
        if (b[i] == '1')
        {
            if (i%2 == 0) b_even++;
            else b_odd++;
        }
    }
    
    if (!(a_even == b_even && a_odd == b_odd))
    {
        cout << -1 << endl;
        return;
    }

    vector<int> even, odd;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            if (i%2 == 0) even.push_back (i);
            else odd.push_back(i);
        }
    }

    int idx_e = 0, idx_o = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '1')
        {
            if (i%2 == 0)
            {
                ans += ((ll)(abs(even[idx_e++] - i))/2);
            }
            else
            {
                ans += ((ll)(abs(odd[idx_o++] - i))/2);
            }
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
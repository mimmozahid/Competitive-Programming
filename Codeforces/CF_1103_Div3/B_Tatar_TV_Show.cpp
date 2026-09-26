#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < n-k; i++)
    {
        if (s[i] == '1')
        {
            if (i+k < n)
            {
                s[i] = '0';
                if (s[i+k] == '1')
                    s[i+k] = '0';
                else
                    s[i+k] = '1';
            }
        }
    }

    if (count (s.begin(), s.end(), '0') == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
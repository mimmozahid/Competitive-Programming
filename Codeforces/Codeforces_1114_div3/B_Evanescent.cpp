#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int gp = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i-1]) gp++;
    }
    
    int ans = gp;
    for (int i = 1; i < n-1; i++)
    {
        int a = 0;
        if (s[i] != s[i-1] && s[i] != s[i+1])
        {
            if (s[i-1] == s[i+1])
                a = -2;
            else
                a = -1;
        }

        ans = min (ans, gp+a);
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
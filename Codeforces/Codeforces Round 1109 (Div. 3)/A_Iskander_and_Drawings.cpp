#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0, curr = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            curr++;
        }
        else
        {
            ans = max (ans, curr);
            curr = 0;
        }
    }
    ans = max (ans, curr);
    
    cout << (ans + 1)/2 << endl;
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
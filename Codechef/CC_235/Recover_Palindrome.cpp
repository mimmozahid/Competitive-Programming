#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool find_q = find(s.begin(), s.end(), '?') != s.end();

    if (!find_q)
    {
        cout << "YES" << endl;
        return;
    }

    int l = 0, r = n-1;

    bool flg = true;

    while (r > l)
    {
        if (s[l] == '?' && s[r] == '?')
        {
            flg = false;
        }

        l++, r--;
    }

    if (n%2 != 0 && s[n/2] == '?') flg = false;

    if (flg)
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
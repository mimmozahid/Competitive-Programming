#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0, ans = 0;

    for (auto x : s)
    {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            cnt = 0;
        else
        {
            cnt++;
            ans = max (ans, cnt);
        }
    }

    if (ans >= 4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
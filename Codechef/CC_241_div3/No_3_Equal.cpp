#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;

    // sort(s.begin(), s.end());

    for (int i = 0; i < n-2;)
    {
        if (s[i] == s[i+1] && s[i+1] == s[i+2])
        {
            ans++;
        }
        int baki_idx = n - i+2;
        if (baki_idx < 3)
            break;

        if (s[i] == s[i+1] && s[i+1] == s[i+2])
            i+=3;
        else
            i++;
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
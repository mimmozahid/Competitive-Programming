#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i-1])
            cnt++;
    }
    
    if (cnt == 2) cout << cnt << endl;
    else cout << 1 << endl;
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
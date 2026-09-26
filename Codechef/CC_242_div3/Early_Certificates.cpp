#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n,m;
    cin >> n >> m;

    string s1, s2;
    cin >> s1 >> s2;

    int mn = min (n, m);

    for (int i = 0; i < mn; i++)
    {
        if (s1[i] == s2[i])
        {
            cout << s1[i];
        }
        else
            break;
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
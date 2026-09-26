#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    bool flg = true;

    for (int i = 0; i < n; i++)
    {
        if (4 >= v[i])
        {
            flg = false;
        }
    }
    
    if (flg) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve ();
    
    return 0;
}
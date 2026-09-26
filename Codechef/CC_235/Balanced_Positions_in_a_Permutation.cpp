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
    
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int l=0, r=0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
                l++;
        }
        
        for (int k = i+1; k < n; k++)
        {
            if (v[k] > v[i])
                r++;
        }

        if (r == l) ans++;
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
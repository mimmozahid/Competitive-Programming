#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, k, total = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) 
    {
        cin >> x;
        total += x;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int p = v[i]+v[j];
            int q = (total-p)/2;

            if (p+q > k) ans++;
        }
        
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
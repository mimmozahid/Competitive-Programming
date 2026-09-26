#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, l, r;
    cin >> n >> l >> r;
    
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
        
    int left = 0, right = 0;
    
    for (int i = 1; i < l; i++)
    {
        left += v[i];
    }
    
    for (int i = r+1; i <= n; i++)
    {
        right += v[i];
    }
    
    cout << max (right, left) << endl;
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
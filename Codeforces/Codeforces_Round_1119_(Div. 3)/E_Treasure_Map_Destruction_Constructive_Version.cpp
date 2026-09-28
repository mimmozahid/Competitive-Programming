#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x:v) cin >> x;

    vector<int> diff (n+1, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            int l = i-v[i]+1;
            if (l < 0) l = 0;
            int r = i+v[i]-1;
            if (r>n-1) r=n-1;

            diff[l]++;
            diff[r+1]--;
        }
    }
    
    for (int i = 1;i<=n;i++)
    {
        diff[i] += diff[i-1];
    }

    string ans(n, ' ');
    for (int i = 0; i < n; i++)
    {
        if (diff[i] > 0) ans[i] = '0';
        else ans[i]= '1';
    }
    // cout << ans << endl;

    bool flg = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>=0)
        {
            bool correct = false;
            int l = i-v[i];
            int r = i+v[i];

            if (l >= 0 && ans[l] == '1') correct = true;
            if (r < n && ans[r] == '1') correct = true;

            if (!correct)
            {
                flg = false;
                break;
            }
        }
    }
    
    if (flg) cout << ans << endl;
    else cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while (t--)
        solve ();

    return 0;
}


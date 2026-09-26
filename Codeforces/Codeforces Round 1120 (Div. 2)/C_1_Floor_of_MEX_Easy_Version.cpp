#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    vector<int> diff(n+1, 0);

    for (int i = 1; i <= n; i++)
    {
        ll m = v[i];

        ll l = m*i;
        ll r = (m+1)*i-1;

        if (l >= n) continue;

        r = min (r , (ll)n-1);

        diff[l]++;
        diff[r+1]--;
    }
    
    vector<int> ans;
    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        cur += diff[i];
        if (cur == 0)
        ans.push_back (i);
    }
    
    cout << ans.size() << endl;
    for (auto x : ans) cout << x << " ";
    cout << endl;
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


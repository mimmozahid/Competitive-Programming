#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve (int tc)
{
    ll n, q, ans = 0;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;

        if (x%3 == 0 || x%5 == 0)
            ans++;
    }
    cout << ans << ' ';
    
    while (q--)
    {
        int i, x;
        cin >> i >> x;
        --i;

        if (v[i]%3 == 0 or v[i]%5 == 0)
            ans--;
        
        v[i]=x;
        if (v[i]%3 == 0 or v[i]%5 == 0)
            ans++;
        
        cout << ans << ' ';
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve (i);

    return 0;
}


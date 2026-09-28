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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s = "#" + s;
    // cout << s << endl;

    vector<int> pre_sum(n+1);
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == s[i-1]) pre_sum[i] = 1;

        pre_sum[i] += pre_sum[i-1];
    }

    for (int i = 1; i <= n; i++)
        cout << pre_sum[i] << " ";
    cout << endl;

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int ans = pre_sum[r]-pre_sum[l];
        
        cout << (((ans+1)/2 <= k) ? "YES" : "NO") << endl;
    }
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


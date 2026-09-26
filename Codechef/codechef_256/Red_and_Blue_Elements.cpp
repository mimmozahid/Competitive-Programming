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
    vector<ll> v(n);
    ll total = 0;
    for (auto &x : v) 
    {
        cin >> x;
        total += x;
    }

    sort (v.rbegin(), v.rend());

    ll red_sum = 0, ans = 0;
    for (int i = 1; i <= n/2; i++)
    {
        red_sum += v[i-1];
        ll blue_cnt = n-i;
        ll red_cnt = i;

        ll sumOfblue = total-red_sum;

        ll curr = red_cnt*sumOfblue + blue_cnt*red_sum;
        ans = max (ans, curr);
    }
    

    
    cout << ans << endl;
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


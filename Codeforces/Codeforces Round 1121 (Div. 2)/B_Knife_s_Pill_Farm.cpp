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
    int n, m;
    cin >> n >> m;
    vector<ll> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    priority_queue<ll> pq;
    ll sum = 0, ans = LLONG_MIN;

    for (int i = 1; i <= n; i++)
    {
        if ((int)pq.size() == m-1)
        {
            ll curr = m*v[i] - sum;
            ans = max (ans, curr);
        }

        pq.push (v[i]);

        sum += v[i];

        if ((int)pq.size() > m-1)
        {
            sum -= pq.top ();
            pq.pop();
        }
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


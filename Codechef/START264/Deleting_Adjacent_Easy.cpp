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
    int n;
    cin >> n;
    priority_queue<ll> pq;
    ll sum = 0, mi = 0;

    for (int i = 0; i < n; i++)
    {
        ll x; cin >>x;
        sum += x;
        pq.push (x);
        mi += x;

        if ((int)pq.size() > (i+1)/2)
        {
            mi-=pq.top();
            pq.pop ();
        }
    }
    
    cout << sum - (2*mi) << endl;
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


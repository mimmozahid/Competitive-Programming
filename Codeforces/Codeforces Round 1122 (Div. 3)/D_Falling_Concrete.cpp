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
    set<ll> st;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        st.insert (x-i);
    }
    ll ans = 1;
    for (auto x : st)
    {
        
        if (st.find (x-1) == st.end())
        {
            ll curr = x;
            ll len = 1;

            while (st.find (curr+1) != st.end())
            {
                curr++, len++;
            }
            ans = max (ans, len);
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


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

    deque<ll> ans;
    
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        ll sum = 3;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                ans.push_back (i);
            else if (i == 2)
                ans.push_back(i);
            else
            {
                ans.push_back(sum);
                sum*=2;
            }
        }
    }

    for (auto x : ans) cout << x << " ";
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


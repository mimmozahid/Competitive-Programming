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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m), frq(n+1, 0);
    for (auto &x : v) 
    {
        cin >> x;
        frq[x]++;
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (!frq[i])
        {
            ans.push_back(i);
            k--;
            if (k == 0) break;
        }
    }
    
    for (auto x : ans)
        cout << x << ' ';
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


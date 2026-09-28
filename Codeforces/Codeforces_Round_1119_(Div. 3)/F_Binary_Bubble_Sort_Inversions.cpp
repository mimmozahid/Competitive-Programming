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
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    string s; cin >> s;

    deque<ll> dq;
    ll inv = 0, zero = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (v[i] == 0) zero++;
        else
        {
            dq.push_front (zero);
            inv += zero;
        }
    }
    vector<ll> ans;
    ans.push_back (inv);

    int rev = 0;
    for (int i = 0; i < n; i++)
    {
        if (dq.empty())
        {
            ans.push_back(0);
            continue;
        }
        if (s[i] == '1')
        {
            int mx = dq.front() - rev;
            inv -= mx;
            dq.pop_front();
        }
        else
        {
            while (!dq.empty() && dq.back() <= rev) dq.pop_back();
            rev++;
            int pos = dq.size();
            inv -= pos;
        }

        ans.push_back(inv);
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


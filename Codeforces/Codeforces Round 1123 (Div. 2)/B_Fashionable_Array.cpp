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
    ll n;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;
    for (auto &x : v) 
    {
        cin >> x;
        freq[x]++;
    }
    
    // sort (v.rbegin(), v.rend());

    vector<int> a, ans;
    for (auto[val, frq] : freq)
    {
        a.push_back(val);
    }

    sort (a.rbegin(), a.rend());

    for (auto x : a)
    {
        while (freq[x] > 0)
        {
            ans.push_back(x);
            freq[x]--;
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


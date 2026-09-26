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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(x), b(y);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    vector<int> common, onlyA, onlyB;
    map<int, int> mp;

    for (auto i : a) mp[i]++;
    for (auto i : b) mp[i]++;

    for (auto i : a)
    {
        if (mp[i] == 2) common.push_back(i);
        else onlyA.push_back(i);
    }
    for (auto i : b)
    {
        if (mp[i] == 1) onlyB.push_back(i);
    }
    
    vector<int> all_candidate;

    for (auto i : common) all_candidate.push_back (i);
    sort (onlyA.rbegin(), onlyA.rend());
    sort (onlyB.rbegin(), onlyB.rend());

    while (onlyA.size() > n) onlyA.pop_back();
    while (onlyB.size() > m) onlyB.pop_back();

    for (auto i : onlyA) all_candidate.push_back (i);
    for (auto i : onlyB) all_candidate.push_back (i);

    sort (all_candidate.rbegin(), all_candidate.rend());

    ll ans = 0;

    int mxTake = n+m-1;

    for (int i = 0; i < min (mxTake, (int)all_candidate.size()); i++)
    {
        ans += all_candidate[i];
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


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
    vector<int> v(3);
    for (auto &x : v) cin >> x;
    sort (v.begin(), v.end());

    if (v[0] + v[1] < v[2])
    {
        v[2] = v[0] + v[1];
    }
    sort (v.begin(), v.end());

    cout << abs(v[0]-v[2]) << endl;
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


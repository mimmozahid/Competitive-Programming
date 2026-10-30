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
    int n, k;
    cin >> n >> k;
    vector<int> freq(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        freq[x]++;
    }

    int f = 0, ans = 0;
    while (true)
    {
        if (freq[ans] == 0) break;
        f += freq[ans];
        if (f < k*(ans+1)) break;
        ans++;
    }
    cout << ans << endl;
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


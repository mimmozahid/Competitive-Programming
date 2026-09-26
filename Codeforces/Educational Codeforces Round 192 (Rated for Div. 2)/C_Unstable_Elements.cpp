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
    int n, k;
    cin >> n >> k;
    vector<int> v (n);
    for (auto &x : v) cin >> x;

    vector<int> cnt(n+1,0);
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && v[i] == v[j])
            j++;

        int len = j-i;

        cnt[len]++;
        i=j-1;
    }
    
    int a = 0, b = 0, ans = 0;
    for (int i = n; i >= 1; i--)
    {
        a += cnt[i];
        b += a;

        if (cnt[i] > 0 && k >= b && (k-b) % a == 0)
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
    while (t--)
        solve ();

    return 0;
}


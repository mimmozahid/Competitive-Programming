#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 998244353;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int mxN = 2e5 + 9;
ll fact[mxN];

void cal_fact ()
{
    fact[0] = 1;

    for (int i = 1; i < mxN; i++)
    {
        fact[i] = (fact[i-1] * i)%MOD;
    }
}

int power (int x, int n)
{
    int ans = 1%MOD;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans%MOD * x%MOD);
        }
        x = 1LL * x * x % MOD;
        n>>=1;
    }
    return ans;
}

void solve (int tc)
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
    }
    
    ll ans = (fact[k] * power (k, n-k)) % MOD;
    cout << ans << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cal_fact ();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve (i);

    return 0;
}


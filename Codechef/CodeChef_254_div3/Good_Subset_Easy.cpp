#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 


#define MOD 998244353

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



void solve ()
{
    int n, ans = 0;
    cin >> n;
    
    vector<int> cnt(32);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int msb = __lg(x);
        cnt[msb]++;
        ans = max (ans, cnt[msb]);
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


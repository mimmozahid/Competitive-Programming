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
    int n;
    cin >> n;
    vector<ll> v(n), cnt (n+9);
    for (auto &x : v)
    {
        cin >> x;
        cnt[x]++;
    }

    ll ans = 0;

    for (int mex = 0; mex <= n+1; mex++)
    {
        ll total_way = 1;
        for (int i = 0; i < mex; i++)
        {
            if (cnt[i] == 0)
            {
                total_way = 0;
                break;
            }
            else
            {
                int own_way = power(2, cnt[i])-1;
                total_way *= own_way;
                total_way %= MOD;
            }
        }
        
        if (total_way == 0) continue;
        ll extra = power(2, cnt[mex+1]);
        if (mex == 0) --extra;
        total_way *= extra;
        total_way %= MOD;
        ans += total_way;
        ans %= MOD;
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


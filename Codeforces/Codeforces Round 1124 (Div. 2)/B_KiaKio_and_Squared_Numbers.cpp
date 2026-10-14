#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

ll Next[10000];
ll step1000[10000];

ll f (ll x)
{
    int sum = 0;
    while (x > 0)
    {
        int a = x%10;
        sum += a*a;
        x /= 10;
    }
    return sum;
}



void solve (int tc)
{
    int n;
    cin >> n;
    vector<ll> v (n);
    for (auto &x : v) cin >> x;

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            ll l = v[i], r = v[j];
            if (l > 999 || r > 999)
            {
                l = f (l), r = f(r);
            }
            if (step1000[l] == step1000[r])
                ans++;
        }
        
    }
    cout << ans << endl;
}   

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 1; i < 1000; i++)
    {
        Next[i] = f(i);
    }
    
    for (int i = 1; i < 1000; i++)
    {
        ll cur = i;
        for (int j = 1; j < 1001; j++)
        {
            cur = Next[cur];
        }
        step1000[i] = cur;
    }
    
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve (i);

    return 0;
}


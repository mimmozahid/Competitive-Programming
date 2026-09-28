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
    vector<int> v(n);
    for (auto &x :v) 
    {
        cin >> x;
    }

    int f_minus_one = n+1, l_minus_one = -1;
    int f_one = n+1, l_one = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            f_minus_one = min (i, f_minus_one);
            l_minus_one = max (i, l_minus_one);
        }

        if (v[i] == 1)
        {
            f_one = min (f_one, i);
            l_one = max (l_one, i);
        }
    }
    
    if (f_minus_one < f_one && f_minus_one != n+1) v[f_minus_one] = 1;
    if (l_minus_one > l_one && l_minus_one != -1) v[l_minus_one] = 1;

    for (auto &x : v)
    {
        if (x == -1) x = 0;
    }

    for (auto x : v) cout << x << " ";
    cout << endl;
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


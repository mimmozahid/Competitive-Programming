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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n <= m)
    {
        cout << "NO" << endl;
        return;
    }

    int idx = 0, ans = 0;
    for (int i = 0; i < n;)
    {
        if (a[i] <= b[idx] && b[idx] <= a[i+1])
        {
            ans++;
            idx++;
            if (idx >= m)
            {
                break;
            }
            i+= 2;
        }
        else
            i++;
    }
    
    if (idx == m)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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


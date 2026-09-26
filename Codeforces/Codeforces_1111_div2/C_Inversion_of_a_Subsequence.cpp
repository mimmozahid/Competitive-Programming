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
    vector<int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int zz = 0, oo = 0, zo = 0, oz = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == 1) oz++;
            else zo++;
        }
        else
        {
            if (a[i] == b[i])
            {
                if (a[i] == 1) oo++;
                else zz++;
            }
        }
    }
    
    if (oz > 0)
    {
        if (oz&1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    else if (zo > 0)
    {
        if (zz > 0 && oo > 0)
            cout << 2 << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << 0 << endl;
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


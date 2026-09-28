#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    
    int lenOfMinus = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1) break;
        lenOfMinus++;
    }
    
    int notEqual = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i-1]) notEqual++;
    }
    
    int cnt = 0;

    for (int i = lenOfMinus; i < n-1; i++)
    {
        if (a[i]+1 == a[i+1])cnt++;
    }
    
    int ans = power (2, n-notEqual);

    if (!lenOfMinus)
    {
        cout << ans << endl;
        return;
    }

    ans = (1LL*ans*(cnt+1))%MOD;
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


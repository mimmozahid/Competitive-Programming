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

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    map<int, int> ans, avble;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            ans[i] = ans[i-1]+1;
            avble[a[i]] = i;
        }
        else
        {
            ans[i] = ans[i-1];
            int need = a[i]-1;
            if (avble[need] > 0)
            {
                int stChain = avble[need];
                int curAns = ans[stChain-1] + a[i];
                ans[i] = max(ans[i], curAns);
                avble[a[i]] = avble[need];
            }
        }
    }
    cout << ans[n] << endl;
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


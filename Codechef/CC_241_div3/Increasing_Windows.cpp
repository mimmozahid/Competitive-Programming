#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define MOD 998244353

int modPow (int x, int n)
{
    int ans = 1%MOD;
    
    while (n)
    {
        if (n&1)
            ans = (1LL * ans%MOD * x%MOD) % MOD;

        x = 1LL * x*x %MOD;
    
        n >>= 1;
    }

    return ans;
}



void solve ()
{
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--)
        solve ();  //! incompleter...
    
    return 0;
}
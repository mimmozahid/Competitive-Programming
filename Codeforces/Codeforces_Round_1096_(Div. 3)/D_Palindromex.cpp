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

const int mxN = 2e5+9;
vector<int> v(mxN);
int n;

int check (int l, int r)
{
    if (r >= 2*n || v[l] != v[r])
        return INT_MIN;
    
    vector<int> cnt (n+1, 0);

    while (l >= 0 && r < 2*n && v[l] == v[r])
    {
        cnt[v[l]]++;
        l--, r++;
    }

    int mex = 0;

    while (cnt[mex] != 0)
    {
        mex++;
    }

    return mex;
}

void solve ()
{
    cin >> n;
    for (int i = 0; i < 2*n; i++)
    {
        cin >> v[i];
    }
    int ans = 1;
    int x = -1, y = -1;
    for (int i = 0; i < 2*n; i++)
    {
        if (v[i] == 0)
        {
            if (x == -1)
                x = i;
            else
                y = i;
        }
    }
    
    ans = max (ans, check (x,x));
    ans = max (ans, check (y,y));
    ans = max (ans, check ((x+y)/2, (x+y+1)/2));

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


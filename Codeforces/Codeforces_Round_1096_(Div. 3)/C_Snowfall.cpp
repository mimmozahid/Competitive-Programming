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

    vector<ll> ans, a, b, c;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x%6 == 0)
            ans.push_back(x);
        else if (x%2 == 0)
            a.push_back(x);
        else if (x%3 == 0)
            b.push_back(x);
        else
            c.push_back(x);
    }
    for (auto x : a)
        ans.push_back(x);

    for (auto x : c)
        ans.push_back(x);

    for (auto x : b)
        ans.push_back (x);

    for (auto x : ans)
        cout << x << " ";
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


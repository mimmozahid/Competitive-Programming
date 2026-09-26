#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int maxN = 2e5 + 9;
vector<bool> prime(maxN, true);
vector<int> allPrimes;

void sieve ()
{
    for (ll i = 2; i*i <= maxN; i++)
    {
        if (prime[i])
        {
            for (ll j = i+i; j <= maxN; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= maxN; i++)
    {
        if (prime[i])
            allPrimes.push_back (i);
    }
}

void solve ()
{
    int n, k;
    cin >> n >> k;
    deque<int> v(n);
    for (auto &x : v) cin >> x;

    vector<int> dp (n+1, 0);

    for (int x = k+1; x <= n; x++)
    {
        dp[x] = x;
        int tmp = x;

        for (auto p : allPrimes)
        {
            if (p*p > tmp)
            {
                break;
            }

            if (tmp%p == 0)
            {
                dp[x] = min (dp[x], 1+p* dp[x/p]);
                while (tmp%p == 0)
                {
                    tmp/= p;
                }
            }
        }

        if (tmp > 1)
        {
            int p = tmp;
            dp[x] = min (dp[x], 1+p*dp[x/p]);
        }
    }

    ll ans = 0;
    for (auto x : v)
    {
        ans += dp[x];
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve ();   
    int t = 1;
    cin >> t;
    while (t--)
        solve ();

    return 0;
}


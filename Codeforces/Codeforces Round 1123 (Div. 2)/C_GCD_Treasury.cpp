#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int maxN = 3e5 + 10;
vector<bool> prime(maxN, true);
vector<ll> allPrimes;

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

    for (ll i = 1; i <= maxN; i++)
    {
        if (prime[i])
            allPrimes.push_back (i);
    }
}

void solve (int tc)
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (auto &c : v) cin >> c;

    ll mx = 0;
    
    for (auto val : allPrimes)
    {
        if (val > x) break;

        if (x%val == 0) // যদি x, একটি prime number দ্বারা নিঃশেষে বিভাজ্য হয়..
        {
            ll cur = 0;

            for (int i = 0; i < n; i++)
            {
                if (__gcd(v[i], val) > 1)
                {
                    cur += v[i];
                }
            }
            mx = max (cur, mx);
        }
    }
    cout << mx << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve (i);

    return 0;
}


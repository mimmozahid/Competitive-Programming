#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve (int tc)
{
    int n;
    cin >> n;
    vector<ll> v(n), b;
    for (auto &x :v) cin >> x;

    int idx = -1;
    for (int i = 0; i < n-1; i++)
    {
        if (v[i] > v[i+1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        cout << -1 << endl;
        return;
    }

    auto ok = [&](int mid)
    {
        b = v;
        int a = lower_bound (b.begin(), b.begin()+idx+1, mid)-b.begin();
        ll s = 0;
        for (int i = a; i < n; i++)
        {
            if (b[i] >= mid)
            {
                s += b[i]-mid;
                b[i] = mid;
            }
            else
            {
                ll q = min (s, mid-b[i]);
                s -= q;
                b[i] += q;
            }
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if (b[i] > b[i+1])
                return false;
        }
        return true;
    };

    int l = 1, r = v[idx];
    while (l < r)
    {
        int mid = l + (r-l+1)/2;
        if (ok (mid))
            l = mid;
        else
            r = mid-1;
    }

    cout << l << endl;
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


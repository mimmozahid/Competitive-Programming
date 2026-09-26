#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int ones = 0, twos = 0, threes = 0;

    auto ok = [&](int j)
    {
        int o = 0, t = 0, th = 0;
        for (int i = j; i < n-1; i++)
        {
            if (a[i] == 1) o++;
            else if (a[i] == 2) t++;
            else th++;

            if (t+o >= th)
            {
                return true;
            }
        }
        return false;
    };

    bool flg = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1) ones++;
        else if (a[i] == 2) twos++;
        else threes++;

        if (ones >= twos+threes)
        {
            if (ok(i+1))
            {
                flg = true;
                break;
            }
        }
    }
    
    if (flg) cout << "YES" << endl;
    else cout << "NO" << endl;
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


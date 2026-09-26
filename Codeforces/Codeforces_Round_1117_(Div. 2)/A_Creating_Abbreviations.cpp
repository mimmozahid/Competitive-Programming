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
    int n, m;
    cin >> n >> m;
    vector<string> v(n), ab(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ab[i];
    }
    
    map<char, bool> mp;
    for (auto s : v)
    {
        char c = toupper (s[0]);
        mp[c] = true;
    }
    bool flg = true;
    for (auto s : ab)
    {
        for (auto c : s)
        {
            if (!mp[c])
            {
                flg = false;
                break;
            }
        }
    }

    cout << (flg ? "YES" : "NO" ) << endl;
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


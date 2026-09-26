#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    if (s[0] == '1')
    {
        for (auto c : s)
            if (c == '0') ans++;
            
        cout << ans << endl;
        return;
    }

    int suf_zero = 0;
    for (auto c : s)
    {
        if (c == '0') suf_zero++;
    }

    int pre_one = 0;
    ans = suf_zero;

    for (auto c : s)
    {
        if (c == '1')
        {
            pre_one++;
        }
        else
        {
            suf_zero--;
        }

        int curr = pre_one+suf_zero;
        ans = min (ans, curr);
    }
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


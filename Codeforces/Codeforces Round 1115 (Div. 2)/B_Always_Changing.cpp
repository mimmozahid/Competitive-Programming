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
    int n; cin >> n;
    string s, ans;
    cin >> s;

    char ch = s[0];
    int one = 0, zero = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            ans.push_back (s[i]);
            ch = (ch == '1' ? '0' : '1');
        }
        else
        {
            if (s[i] == '0') zero++;
            else one++;
        }
    }
    
    int diff = (one-zero);
    if (abs(diff) <= 1)
    {
        cout << one+zero << endl;
        return;
    }

    int extra = abs(diff) -1;
    char needed = (diff > 0 ? '0' : '1');
    int m = ans.size ();

    int p = 0;
    if (m == 1)
    {
        if (ans[0] == needed) p++;
    }
    else
    {
        p = (ans.front() == needed) + (ans.back() == needed);
    }

    if (p < extra) cout << -1 << endl;
    else cout << one + zero + extra << endl;
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


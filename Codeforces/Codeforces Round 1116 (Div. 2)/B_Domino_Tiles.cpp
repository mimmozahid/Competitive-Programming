#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

string pattern (int n, string tmp, char ch)
{
    int cnt = 0;
    
    while (tmp.size () < n)
    {
        if (cnt == 2)
        {
            cnt = 0;
            if (ch == '1') ch = '0';
            else ch = '1';
        }
        cnt++;
        tmp += ch;
    }
    return tmp;
}

bool check (string s, string tmp)
{
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != tmp[i] && s[i] != '?')
            return false;
    }
    return true;
}

void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string tmp1 = "00", tmp2 = "11", tmp3 = "1", tmp4 = "0";

    // cout << pattern (n, tmp1, '1') << endl;
    
    int ans = 0;
    ans += check (s, pattern (n, tmp1, '1'));
    ans += check (s, pattern (n, tmp2, '0'));
    ans += check (s, pattern (n, tmp3, '0'));
    ans += check (s, pattern (n, tmp4, '1'));

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


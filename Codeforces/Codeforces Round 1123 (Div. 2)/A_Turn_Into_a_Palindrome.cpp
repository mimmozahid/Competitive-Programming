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
    int n; char c;
    cin >> n >> c;
    string s; cin >> s;

    int i = 0, j = n-1, ans = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            if (s[i] != c) ans++;
            if (s[j] != c) ans++; 
        }
        i++, j--;
    }
    cout << ans << endl;
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


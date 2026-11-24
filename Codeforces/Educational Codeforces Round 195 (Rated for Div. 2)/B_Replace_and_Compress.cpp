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
    string s;
    cin >> s;
    int ans = 1;

    //* 000 & 111 er khetre 0 and 1 count bare,,, same thake,,,
    if (s.find ("000") != string::npos || s.find ("111") != string::npos)
        ans++;

    //* 010 & 101 er khetre o same,,,
    if (s.find ("010") != string::npos || s.find ("101") != string::npos) 
        ans++;

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


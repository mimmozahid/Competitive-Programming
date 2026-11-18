#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;

    vector<vector<ll>> pre_2d(n+1, vector<ll>(n+1));
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        for (int j = 1; j <= n; j++)
        {
            pre_2d[i][j] = (s[j-1] == '*') + pre_2d[i][j-1] + pre_2d[i-1][j] - pre_2d[i-1][j-1];
        }
        
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << pre_2d[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    
    
    while (q--)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        ll ans = pre_2d[y2][x2] - pre_2d[y1-1][x2] - pre_2d[y2][x1-1] + pre_2d[y1-1][x1-1];
        cout << ans << endl;
    }
    
    return 0;
}

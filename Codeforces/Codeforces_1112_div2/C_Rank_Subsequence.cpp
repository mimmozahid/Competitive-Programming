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
    vector<pair<int, int>> lr(n+1), uv (n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> lr[i].first >> lr[i].second;
        cin >> uv[i].first >> uv[i].second;
    }
    
    int ans = 0;

    for (int len = 0; len <= n; len++)
    {
        int j = 0;
        bool flg = false;

        for (int i = 1; i <= n; i++)
        {
            int left_rank = j+1;
            int right_rank = len - (j+1)+1;

            if ((left_rank < lr[i].first || left_rank > lr[i].second) && (right_rank < uv[i].first || right_rank > uv[i].second))
            {
                j++;
            }
            if (j == len)
            {
                flg = true;
                break;
            }
        }
        
        if (flg)
        {
            ans = max (ans, len);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
        solve ();
    
    return 0;
}
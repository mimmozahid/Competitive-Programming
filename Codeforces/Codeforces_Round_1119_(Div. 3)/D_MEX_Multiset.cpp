#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define nl '\n'
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 


void solve ()
{
    int n, cnt = 0;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0) cnt++;
        v.push_back ({x, i});
    }
    sort (v.begin(), v.end());

    if (cnt == 0)
    {
        cout << "YES" << endl;
        string ans(n, 'A');
        cout << ans << nl;
        return;
    }

    if (cnt == 1)
    {
        cout << "NO" << nl;
        return;
    }

    if (cnt >= 2)
    {
        cout << "YES" << nl;
        string ans (n, 'C');
        ans[v[0].second] = 'A';
        ans[v[1].second] = 'B';
        for (int i = 2; i < n; i++)
        {
            if (v[i].first == 0) ans[v[i].second] = 'A';
        }
        cout << ans << nl;
    }
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


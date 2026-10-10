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
    int n; cin >> n;
    string s; cin >> s;

    stack <int> st;
    vector<bool> vis(n+1, false);

    for (int i = 1; i <= n; i++)
    {
        if (s[i-1] == '1')
            st.push (i);
        else if (s[i-1] == '2')
        {
            if (!st.empty ())
            {
                vis[st.top()] = true;
                st.pop();
            }
            else
            {
                vis[i] = true;
            }
        }
        else
            vis[i] = true;
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i]) ans.push_back(i);
    }
    
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << ' ';
    cout << endl;

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


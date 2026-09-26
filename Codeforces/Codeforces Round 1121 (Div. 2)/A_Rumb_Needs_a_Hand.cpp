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
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;

        if (x != i)
            v.push_back (x);
    }
    bool flg = true;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i-1] < v[i])
        {
            flg = false;
            break;
        }
    }
    
    cout << (flg? "YES" : "NO") << endl;
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


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, ans;
    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        ans.push_back (s[i]);
        if (i< (int)s.size()-1)
        {
            ans.push_back('o');
        }
    }
    cout << ans << endl;
    
    return 0;
}
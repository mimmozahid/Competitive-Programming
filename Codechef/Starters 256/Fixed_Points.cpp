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
    int n, k;
    cin >> n >> k;

    if (k == n-1)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    // if (n == 1 && k == 0)
    // {
    //     cout << "No" <<endl;
    //     return;
    // }
    // if (n == 1 && k == 1)
    // {
    //     cout << "Yes" <<endl;
    //     return;
    // }
    // else if (n == k)
    // {
    //     cout << "Yes" << endl;
    //     return;
    // }

    // if (k <= (n-2))
    //     cout << "Yes" << endl;
    // else
    //     cout << "No" << endl;
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


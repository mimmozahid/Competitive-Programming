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
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    ll sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += (v[i]);
    //     natural_number += i;
    // }
    
    // if (sum < natural_number)
    // {
    //     cout << "NO" << endl;
    //     return;
    // }
    // sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > i)
        {
            sum += (v[i]-i);
            v[i] -= (v[i]-i);
        }
        else if (v[i] < i)
        {
            int a = i - v[i];
            v[i] += a;
            sum -= a;
        }
        if (sum < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    bool flg = true;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i) 
        {
            flg = false;
            break;
        }
    }

    if (flg) cout << "YES" << endl;
    else cout<< "NO" << endl;
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


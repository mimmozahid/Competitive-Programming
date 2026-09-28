#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int odd = 0, even = 0;
    for (auto x : v)
    {
        if (x%2 == 0) even++;
        else odd++;
    }

    if (odd == even) cout << odd+even << endl;
    else if (abs(odd-even) == 1) cout << odd+even << endl;
    else
    {
        int mn = min (odd, even);
        cout << mn*2+1 << endl;
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
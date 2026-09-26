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
    vector<int> v(n+9);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    int initialAns = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != v[i-1]) initialAns++;
    }
    
    int finalAns = initialAns;
    int preAns = initialAns;

    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i-1]) initialAns--;
        if (v[i] != v[i+1]) initialAns--;
        if (v[i+1] != v[i+2]) initialAns--;

        swap (v[i], v[i+1]);
        
        if (v[i] != v[i-1]) initialAns++;
        if (v[i] != v[i+1]) initialAns++;
        if (v[i+1] != v[i+2]) initialAns++;
        
        finalAns = max (finalAns, initialAns);
        initialAns = preAns;
        
        swap (v[i], v[i+1]);
    }
    cout << finalAns << endl;
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


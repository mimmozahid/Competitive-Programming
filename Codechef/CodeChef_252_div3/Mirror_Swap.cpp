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
    int N = n*2+1;
    vector<int> v(N);
    for (int i = 1; i < N; i++) cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        int a = (2*n+1)-i;
        if (v[i] < v[a])
            swap (v[i], v[a]);
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
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
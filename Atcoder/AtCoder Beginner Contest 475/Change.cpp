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
    
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    ll one = 0, ten = 0, hun = 0;

    for (int i = 0; i < n; i++)
    {
        ll b = (v[i]+999)/1000;
        ll cng = (b * 1000)- v[i];
        hun += (cng/100);
        cng %= 100;

        ten += (cng/10);
        cng %= 10;

        one +=cng;
    }
    
    cout << one << " " << ten << " " << hun << endl;
    
    return 0;
}
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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> freq(101);
    for (auto &x : v) 
    {
        cin >> x;
        freq[x]++;
    }
    int mex = -1;
    for (int i = 0; i <= 100; i++)
    {
        if (freq[i] == 0)
        {
            mex = i;
            break;
        }
    }
    // cout << mex << endl;
    int cnt = 0;
    
    for (int i = 1; i <= 100; i++)
    {
        if (i < mex)
        {
            cnt += i*(freq[i]-1);
        }
        else
        {
            cnt += freq[i] * (i-(mex+1));
        }
    }
    
    if (cnt%2 != 0)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
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


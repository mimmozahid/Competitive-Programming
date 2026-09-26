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
    ll n;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;
    for (auto &x : v) 
    {
        cin >> x;
        freq[x]++;
    }
    
    sort (v.rbegin(), v.rend());
    v.erase (unique (v.begin(), v.end()), v.end());
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (!freq[v[i]]) continue;

        while (freq[v[i]])
        {
            for (int j = i; j < v.size(); j++)
            {
                if (freq[v[j]])
                {
                    ans.push_back(v[j]);
                    freq[v[j]]--;
                }
            }
        }
    }
    
    for (auto x : ans) cout << x << " ";
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


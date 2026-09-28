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
    int n, k;
    cin >> n >> k;
    string s, tmp;
    cin >> s;
    tmp = s;
    n *= 2;

    for (int i = 0; i < n; i++)
    {
        if (tmp[i] == '1' && tmp[(i+1)%n] == '0')
        {
            swap (s[i], s[(i+1)%n]);
        }
    }
    int red = 0, blue = 0;
    
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i%2 == 0 && s[i] == '1') red++;
        else if (i%2 == 1 && s[i] == '1') blue++;
    }
    
    cout << blue << " " << red << endl;
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


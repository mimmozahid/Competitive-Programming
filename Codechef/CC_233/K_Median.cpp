#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    sort (v.begin(), v.end());

    set<int> ans;

    int total = n - k, left = 0, right = 0;
    if (total % 2 == 0)
    {
        left = (total/2) - 1;
        right = total/2;
    }
    else
    {
        left = right = total/2;
    }

    for (int i = 0; i < n; i++)
    {
        int cur_l = i, cur_r = n-1-i;

        if (left <= cur_l && right <= cur_r)
            ans.insert(v[i]);
    }
    
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--)
    {
        solve ();
    }
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n), ng;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int sum = 0;
    int ans = 0;

    // for (auto x : v)
    // {
    //     if (x >= 0)
    //     {
    //         sum += x;
    //         ans++;
    //     }
    //     else
    //         ng.push_back(x);
    // }

    // sort(ng.rbegin(), ng.rend());

    // for (auto x: ng)
    // {
    //     if (sum+x >= 0)
    //     {
    //         sum += x;
    //         ans++;
    //     }
    //     else
    //         break;
    // }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum >= 0)
        {
            ans++;
        }
    }
    
    
    cout << ans <<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve ();
    
    return 0;
}
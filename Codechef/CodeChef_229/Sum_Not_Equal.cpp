#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    
    bool flg = true;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        v.push_back({x, i});

        if (x != 0)
        {
            flg = false;
        }
    }

    if (flg)
    {
        cout << -1 << endl;
        return;
    }

    sort(v.rbegin(), v.rend());

    if (v[0].first+v[1].first != v[n-1].first)
    {
        cout << v[0].second << " " << v[1].second << " " << v[n-1].second << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    
    //! wrong approach.. for the test case[0,1,1,2]...

    // int i = 0, j = 1, k = 2;
    // while (1)
    // {
    //     if (v[i]+v[j] != v[k])
    //     {
    //         cout << i+1 << " " << j+1 << " " << k+1 << endl;
    //         return;
    //     }
    //     else if (v[i] + v[j] == v[k])
    //     {
    //         if (k != n-1)
    //             k++;
    //         else
    //         {
    //             if (j != k-1)
    //                 j++;
    //             else
    //             {
    //                 cout << -1 << endl;
    //                 return;
    //             }
    //         }
    //     }
    // }

    // cout << -1 << endl;
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
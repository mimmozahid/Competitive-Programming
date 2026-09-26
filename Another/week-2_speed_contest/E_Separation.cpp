#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    bool flg = false;
    int l = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
            l++;
        else if (arr[i] > x)
            r++;
        else
            flg = true;
    }

    if (flg)
        cout << "Yes" << endl;
    else if (l > 0 && r > 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    vector<int> arr;
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x*(-1));
    }
    
    int ans = -10000;
    for (int i = 0; i < 7; i++)
    {
        int a = 0;
        for (int j = 0; j < 7 ; j++)
        {
            if (i == j)
            {
                a += arr[j]*-1;
            }
            else
                a += arr[j];
        }
        ans = max (a, ans);
    }
    cout << ans << endl;
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
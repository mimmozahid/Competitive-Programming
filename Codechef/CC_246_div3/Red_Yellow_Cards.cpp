#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int r, y;
    cin >> r >> y;

    if (y <= r+1)
        cout << r << endl;
    else
    {
        int remain = y - (r+1);
        cout << r + (remain+1)/2 << endl;
    }
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
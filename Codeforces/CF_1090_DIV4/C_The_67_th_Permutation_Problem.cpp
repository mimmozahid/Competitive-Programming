#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " " << 3*n - i*2-1 << " " << 3*n - 2*i << " ";
    }

    cout << endl;
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
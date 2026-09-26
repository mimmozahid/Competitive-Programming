#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int x;
    cin >> x;

    int cst;

    if (x <= 20)
    {
        cst = x*10 ;
    }
    else
    {
        cst = 20*10;
        int r = x-20;

        cst += (r/2) * 5;
    }

    cout << cst << endl;
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
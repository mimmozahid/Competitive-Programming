#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans;
    cin >> n;

    float p = (float)15/100;
    ans = n*100;

    if (n > 4)
    {
        cout << ans - (ans*p) << endl;
    }
    else
    {
        cout << n*100 << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a;
    cin >> n >> m >> a;

    if (n >= ((m+1) / a))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    return 0;
}
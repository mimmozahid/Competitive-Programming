#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;

    int ans = abs (x-y);

    if (ans == 0 || ans == 2)
        cout << "Interesting" << endl;
    else
        cout << "Boring" << endl;
    
    return 0;
}
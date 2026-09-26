#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int cst = 100*n;
    int st = k+60*n;

    cout << min (cst, st) << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << "Alice" << endl;
    else if (b > a)
        cout << "Bob" << endl;
    else
        cout << "Draw" << endl;
    
    return 0;
}
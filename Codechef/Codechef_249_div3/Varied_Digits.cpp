#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    if (s[0] != s[1])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}
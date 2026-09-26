#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int a = 0, b = 0;
    for (auto x : s)
    {
        if (x == 'a') a++;
        if (x == 'b') b++;
    }

    cout << a << " " << b << endl;
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
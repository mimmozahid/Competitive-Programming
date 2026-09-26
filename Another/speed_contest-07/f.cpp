#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, x;
    cin >> a >> b >> x;

    int blue = x * x;

    if (a * b <= blue)
    {
        cout << 0 << endl;
        return;
    }

    for (int na = 1; na <= 10; na++)
    {
        if (na * b <= blue)
        {
            cout << 1 << endl;
            return;
        }
    }
    for (int nb = 1; nb <= 10; nb++)
    {
        if (a * nb <= blue)
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << 2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt5000, cnt9800;
    cin >> cnt5000 >> cnt9800;

    int total = cnt5000 * 5000 + cnt9800 * 9800;
    cout << total << '\n';

    return 0;
}
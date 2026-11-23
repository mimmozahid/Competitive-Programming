#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    cout << fixed << setprecision(2);

    while (T--) {
        double R;
        cin >> R;

        double area = 0.16 * R * R;
        cout << area << "\n";
    }

    return 0;
}

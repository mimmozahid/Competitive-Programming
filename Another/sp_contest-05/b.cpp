#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    if (cin >> x) 
    {
        if (x == 17)
            cout << "YAY" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
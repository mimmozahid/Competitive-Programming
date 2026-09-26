#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int hour = (n*k)/60;
        int min = (n*k)%60;

        cout << hour << " " << min << endl;
    }
    
    return 0;
}
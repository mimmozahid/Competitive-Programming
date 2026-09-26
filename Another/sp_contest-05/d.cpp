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
        int n, cnt = 0;
        cin >> n;
    
        while (n > 0)
        {
            cnt += (n&1);

            n >>= 1;
        }

        if (cnt %2 == 0) cout << "EVEN" << endl;
        else cout << "ODD" << endl;
    }
    
    return 0;
}
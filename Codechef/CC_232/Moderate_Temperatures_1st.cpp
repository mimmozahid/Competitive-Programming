#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != mn && v[i] != mx)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve ();
    
    return 0;
}
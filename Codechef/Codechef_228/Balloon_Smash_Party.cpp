#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve ()
{
    int n;
    cin >> n;
    int mx = 0;
    vector<int> v(n), ans(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    

    int hit = 0;
    for (int i = 0; i < n; i++)
    {
        if (hit >= v[i])
            ans[i] = v[i];
        else
        {
            ans[i] = hit;
            hit++;
        }
    }
    for (auto a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
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
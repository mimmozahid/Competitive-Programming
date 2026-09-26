#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
vector<int> group(N+1, -1);

void perCompute()
{
    int grp = 1;
    for (int i = 1; i <=N; i++)
    {
        if (group[i] == -1)
        {
            for (int j = i; j <= N; j*=2)
            {
                group[j] = grp;
            }
            grp++;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (group[i] != group[v[i]])
        {
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    perCompute();

    int t;
    cin >> t;

    while (t--)
        solve();
    
    return 0;
}
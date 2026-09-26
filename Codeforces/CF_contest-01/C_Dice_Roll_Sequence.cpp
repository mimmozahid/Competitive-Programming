#include <bits/stdc++.h>
using namespace std;

vector<int> grp(7);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans(n+1);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = grp[v[i]];
    }
    
    int ant = 0;
    for (int i = 1; i < n; )
    {
        int num = 0;
        for (int j = i; j < n; j++)
        {
            if (ans[j] == ans[j+1])
                num++;
            else
            {
                i = j;
                break;
            }
        }
        ant+=num;
        i++;
    }
    cout << ant/2 << endl;
}

int main()
{
    grp[1] = 1;
    grp[6] = 1;
    grp[2] = 2;
    grp[5] = 2;
    grp[3] = 3;
    grp[4] = 3;

    int t;
    cin >> t;

    while (t--)
        solve();
    
    return 0;
}
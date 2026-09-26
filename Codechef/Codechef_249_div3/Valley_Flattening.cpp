#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &i : v) cin >> i;

    vector<bool> fq(n, false);

    vector<int> ans;
    bool flg = false;

    for (int i = 1; i < n-1; i++)
    {
        if (v[i] < v[i-1] && v[i] < v[i+1])
        {
            for (int j = i-1; j <= i+1; j++)
            {
                if (fq[j])
                {
                    int idx = (int)ans.size()-1;
                    if (v[i] < ans[idx])
                    {
                        ans[idx] = v[i];
                    }
                }
                if (!fq[j])
                {
                    ans.push_back (v[i]);
                    fq[j] = true;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!fq[i])
        {
            ans.push_back(v[i]);
        }
    }
    
    int as = 0;
    for (auto x : ans)
    {
        as += x;
    }

    cout << as << endl;
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int currlvl = v[k-1], waterlvl = 1;
    int stayidx = 0;

    sort (v.begin(), v.end());
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == currlvl)
        {
            stayidx = i;
            break;
        }
    }

    int mxH = v[n-1];

    auto ok = [&](int mid)
    {
        int a = v[mid] - currlvl;
        int b = currlvl-waterlvl+1;

        return a <= b;
    };
    
    while (currlvl >= waterlvl && stayidx < n)
    {
        int l = stayidx+1, r = n-1;
        int ans = -1;

        while (l <= r)
        {
            int mid = l + (r-l)/2;
            if (ok(mid))
            {
                ans = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        
        if (ans == -1)
            break;

        currlvl += v[ans]-v[stayidx];
        waterlvl += v[ans]-v[stayidx];
        stayidx = ans;
    }

    if (currlvl == mxH)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
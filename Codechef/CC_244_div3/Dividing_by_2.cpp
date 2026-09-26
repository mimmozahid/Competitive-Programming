#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert (x);
    }
    
    int ans = 0;
    
    while (1)
    {
        bool flg = true;
        int fst_val = *st.begin();
        for (auto z : st)
        {
            if (z != fst_val)
            {
                flg = false;
                break;
            }
        }

        if (flg) break;

        int mx_val = *st.rbegin();
        auto it = st.find(mx_val);
    
        st.erase(it);
        st.insert(mx_val / 2);
        ans++;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}
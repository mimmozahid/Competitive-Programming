#include <bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    set<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.count(v[i]))
        {
            ans += 2;
            st.clear();
        }
        else
            st.insert(v[i]);
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
        solve ();
    
    return 0;
}
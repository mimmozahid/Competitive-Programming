#include <bits/stdc++.h>
using namespace std;

void joit()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int ans = 0;
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        if (st.find(v[i]) == st.end())
        {
            ans++;
            st.insert(v[i]);
        }
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
        joit();
    
    return 0;
}
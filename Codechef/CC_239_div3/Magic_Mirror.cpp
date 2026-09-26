#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;

    set<int> st;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        st.insert(x);
    }

    int b = n/2;
    int a = b-1;

    bool main_flg = true;
    
    for (int i = 0; i < n; i++)
    {
        int p = v[a]-i;
        int q = v[b]+i;
        bool flg01 = false, flg02 = false;

        if (st.find(p) != st.end())
        {
            flg01 = true;
        }
        if (st.find(q) != st.end())
        {
            flg02 = true;
        }

        if (flg01 != flg02)
        {
            main_flg = false;
            break;
        }
    }
    
    if (main_flg) cout << "Yes" << endl;
    else cout << "No" << endl;
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
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    set<ll> st;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        if (st.find(x) == st.end())
        {
            st.insert(x);
            v.push_back(x);
        }
    }
    sort (v.begin(), v.end());
    
    vector<ll> gaps;
    for (int i = 1; i < (int)v.size(); i++)
    {
        gaps.push_back(v[i] - v[i-1]);
    }
    sort (gaps.begin(), gaps.end());

    vector<ll> pref((int)gaps.size()+1, 0);
    for (int i = 0; i < (int)gaps.size(); i++)
    {
        pref[i+1] = pref[i]+gaps[i];
    }
    
    while (q--)
    {
        ll x;
        cin >> x;

        ll c = lower_bound(gaps.begin(), gaps.end(), x) - gaps.begin();
        ll sSum = pref[c];

        ll ans = 1LL*(int)v.size() * x - 1LL*c*x + sSum;

        cout << ans << endl;
    }
    
    return 0;
}
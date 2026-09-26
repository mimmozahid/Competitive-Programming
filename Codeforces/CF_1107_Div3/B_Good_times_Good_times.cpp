#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int str (string &s)
{
    map <char, char> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    
    return mp.size();
}

void solve ()
{
    int n;
    cin >> n;

    string s = to_string (n);

    int len = s.size ();
    ll y = 1;
    for (int i = 0; i < len; i++)
    {
        y *= 10;
    }
    
    cout << y+1 << endl;
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
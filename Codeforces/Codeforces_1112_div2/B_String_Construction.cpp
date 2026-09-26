#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n, k;
    cin >> n >> k;

    if (k > n-2)
    {
        cout << -1 << endl;
        return;
    }

    string ans = "";
    int zero = (k+1)/2, one = k/2;

    for (int i = 0; i <= zero; i++) ans += '0';
    for (int i = 0; i <= one; i++) ans+='1';
    
    char ch = '0';
    while (ans.size() < n)
    {
        ans += ch;
        ch ^= 1;
    }

    if (abs(count(ans.begin(), ans.end(), '0') - count(ans.begin(), ans.end(), '1')) > 1)
    {
        ans.pop_back();
        ans = '1'+ans;
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
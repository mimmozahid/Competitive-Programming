#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

void solve ()
{
    int n;
    string a, b;
    cin >> n;
    cin >> a >> b;
    
    int i = 0, j = 0;

    while (i < n && j < n)
    {
        char target = b[j];

        while (i < n && a[i] != target) i++;

        if (a[i] == target) j++;
    }

    if (j == n) yes
    else no
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
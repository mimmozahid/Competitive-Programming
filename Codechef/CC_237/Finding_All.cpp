#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    int a = 0, c = 0;
    for(int i = 0; i < N; i++)
    {
        int x; cin >> x;
        if(x == -1) a++;
        else if(x == 1) c++;
    }
    
    vector<int> res;
    if(a == 0 && c == 0)
    {
        res = {0};
    }
    else if(c == 0)
    {
        res = {1};
    }
    else if(a == 0)
    {
        res = {-1};
    }
    else if(a == 1 && c == 1)
    {
        res = {0};
    }
    else if(a >= 2 && c >= 2)
    {
        res = {-1, 0, 1};
    }
    else if(a >= 2 && c == 1)
    {
        res = {0, 1};
    }
    else
    {
        res = {-1, 0};
    }
    
    for(int i = 0; i < (int)res.size(); i++)
    {
        if(i) cout << ' ';
        cout << res[i];
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}
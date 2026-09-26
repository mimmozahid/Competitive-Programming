#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve ()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a) cin >> x;
    
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        
        vector<int> ngl(n, -1), ngr(n, n);
        stack<int> st;
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && a[st.top()] < a[i]) st.pop();
            ngl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && a[st.top()] < a[i]) st.pop();
            ngr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        
        ll ans = 0;
        
        for(int l = 0; l < n; l++){
            int mx1 = a[l], mx2 = -1;
            for(int r = l+1; r < n; r++){
                if(a[r] > mx1){ mx2 = mx1; mx1 = a[r]; }
                else if(a[r] > mx2){ mx2 = a[r]; }
                ans += mx2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
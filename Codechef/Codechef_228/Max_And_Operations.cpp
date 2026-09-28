#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

// Count numbers in [1, M] with bit b set
long long countBit(long long M, int b) {
    long long cycle = 1LL << (b + 1);
    long long full = M / cycle;
    long long rem = M % cycle;
    long long inCycle = 1LL << b;
    return full * inCycle + max(0LL, rem - inCycle + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long N, M;
        cin >> N >> M;
        
        if (N == 1) {
            cout << 0 << "\n";
            continue;
        }
        
        long long MpowN1 = power(M, N - 1, MOD); // M^(N-1)
        long long ans = 0;
        
        for (int b = 0; (1LL << b) <= M; b++) {
            long long pb = countBit(M, b) % MOD;
            long long bit_val = power(2, b, MOD);
            
            // N * pb * M^(N-1) - pb^N
            long long term = (N % MOD * pb % MOD * MpowN1 % MOD - power(pb, N, MOD) + MOD) % MOD;
            ans = (ans + bit_val * term) % MOD;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=998244353;

int main(){
    int T; 
    if(scanf("%d",&T)!=1) return 0;
    int MAXN=2005;
    vector<ll> fact(MAXN);
    fact[0]=1;
    for(int i=1;i<MAXN;i++) fact[i]=fact[i-1]*i%MOD;
    
    while(T--){
        int N,K; scanf("%d %d",&N,&K);
        vector<vector<ll>> PSdiag(N+1);
        for(int d=0; d<=N; d++){
            PSdiag[d].assign(N-d+2, 0);
        }
        vector<ll> Tprev(N+1,0), Tcur(N+1,0);
        vector<ll> A(N+1,0);
        
        // i=0
        {
            int i=0;
            ll E00=1;
            int d=0, j=0;
            int R=min(K-1,i);
            int lowIdx=max(0,j-R);
            ll window = (PSdiag[d][j] - PSdiag[d][lowIdx] + MOD)%MOD;
            ll Tij=(E00+window)%MOD;
            PSdiag[d][j+1] = (PSdiag[d][j]+E00)%MOD;
            Tcur[0]=Tij;
        }
        Tprev = Tcur;
        if(N==0){
            printf("0\n");
            continue;
        }
        
        for(int i=1;i<=N;i++){
            fill(Tcur.begin(), Tcur.end(), 0);
            int R = min(K-1, i);
            for(int j=0;j<=i;j++){
                ll Eij;
                if(j<=i-1) Eij = Tprev[j]; else Eij=0;
                int d = i-j;
                int lowIdx = max(0, j-R);
                ll window = (PSdiag[d][j] - PSdiag[d][lowIdx] + MOD)%MOD;
                ll Tij = (Eij+window)%MOD;
                PSdiag[d][j+1] = (PSdiag[d][j]+Eij)%MOD;
                Tcur[j]=Tij;
            }
            Tprev = Tcur;
            if(i==N){
                for(int t=0;t<=N;t++) A[t]=Tcur[t];
            }
        }
        
        ll ans=0;
        for(int t=0;t<=N-1;t++){
            ll term = A[t]%MOD * fact[t]%MOD * fact[N-t]%MOD;
            ans = (ans+term)%MOD;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define vc vector
#define pb push_back
#define int long long
#define sz(A) ((int)(A.size()))
#define all(x) x.begin(),x.end()
#define pys(x) cout << ((x)?"YES":"NO") << endl;
long long mod = 1e9+7, dom = 998244353, inf = 2e18+5;

void solve(int tc){
    int n;cin >> n;    
    vc<int> a(n), cs(n+1, 0), ze(n+1, 0);
    for(int i=0; i<n; i++){
        cin >> a[i];
        cs[i+1] = cs[i] + a[i];
        ze[i+1] = ze[i] + ((a[i]==0)?1: 0);
    }
    
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cout<<fixed<<setprecision(25);
    int Test=1;cin >> Test;
    for(int c=1; c<=Test; c++){
        solve(c);
    }    
    return 0;
}

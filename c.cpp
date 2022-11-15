#include <bits/stdc++.h>
using namespace std;
#define ar array
#define vc vector
#define pb push_back
// #define int long long
#define sz(A) ((int)(A.size()))
#define all(x) x.begin(),x.end()
#define pys(x) cout << ((x)?"YES":"NO") << endl;
long long mod = 1e9+7, dom = 998244353, inf = 2e18+5;

void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T, typename V>
void __print(const array<T, 2> &x) {cerr << '{'; __print(x[0]); cerr << ','; __print(x[1]); cerr << '}';}
template<typename T, typename V>
void __print(const array<T, 3> &x) {cerr << '{'; __print(x[0]); cerr << ','; __print(x[1]); cerr << ','; __print(x[2]); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define w(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define w(x...)
#endif

void solve(){
    int n;
    cin >> n;
    if(n==1){
        vector<int> b(1, -1);
        return;
    }
    vc<int> a(2*n, 0);
    int l = n, r = 1, ok = 0;
    for(int i=0; i<2*n; i++){
        if(a[i]>0)continue;
        if(ok==0ll){
            a[i] = l;
            a[i+l+1] = l;                
            l--;
            ok = 1;
        }
        else{
            a[i] = r;
            a[i+r+1] = r;
            r++;
            ok = 0;
        }
    }
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}

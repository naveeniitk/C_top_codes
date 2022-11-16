#include <bits/stdc++.h>
using namespace std;
string sp=" ";
#define ar array
#define vc vector
#define int int64_t
#define mk make_pair 
#define pb push_back
#define gh cout<<endl;
#define hg cerr<<endl;
#define db long double
#define PII pair<int,int>
#define Umap unordered_map
string yes="YES\n",no="NO\n";
#define Go(A,p) for(auto &p:A)
#define sz(A) ((int)(A.size()))
#define all(x) x.begin(),x.end()
#define Fo(i,k,n) for(int i=k;i<=n;i++)
#define Ro(i,n,k) for(int i=n;i>=k;i--)
#define Print_Return(K) {cout << K << endl;return;}
#define Trav(A,P) for(auto P=A.begin();P!=A.end();P++)
 
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
#define Time cerr<<"\n\nTime : "<<1000*clock()/CLOCKS_PER_SEC<<"ms\n";
 
// Operator overloads <<, >>
template<typename T1, typename T2> // cin >> pair
istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector
istream &operator>>(istream &istream, vector<T> &v) { for (auto &it : v) { cin >> it; } return istream; }
template<typename T1, typename T2> // cout << pair
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector
ostream &operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) { cout << it << " "; } return ostream; }
template<typename T,typename T1>T Rmax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T Rmin(T &a,T1 b){if(b<a)a=b;return a;}
//fill(a,a+n, num)
 
const int mod=1e9+7,MOD=1e9+7, Zero = 0, One = 1;
const int64_t Infinite=2e18+5;
const int Z=2e5+5;
 
 
void solve(int TEST_CASE){
  if(TEST_CASE>1)hg;w(TEST_CASE);
  int N, E;
  cin >> N >> E;
  vc<int> G[N+1];
  for(int i=1;i<=E;i++){
    int u, v;
    cin >> u >> v;
    G[u].pb(v);
    G[v].pb(u);
  }
  vc<int> Vis(N+1,0), Pre(N+1,-1);
  function<void(int,int)> dfs = [&](int u, int p){
    Vis[u] = 1;
    Pre[u] = p;
    for(int v: G[u]){
      if(Vis[v]==2 || v==p)continue;
      if(Vis[v]==1){
        vc<int> ans{v};
        for(int s=u;s!=v;s=Pre[s]){
          ans.pb(s);
        }
        ans.pb(v);
        reverse(all(ans));
        cout << sz(ans) << endl;
        cout << ans << endl;
        exit(0);
        // exit(1);
        // return;
      }
      dfs(v,u);
    }
    Vis[u] = 2;
  };
 
  for(int i=1;i<=N;i++){
    if(Vis[i]==0){
      dfs(i,-1);
    }
  }
 
  cout << "IMPOSSIBLE\n";
}
 
// Check value of mod 
// you have changed int to int64_t : TLE 
 
int32_t main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//File();
  cout<<fixed<<setprecision(25);
  int Test=1;//cin >> Test;
  Fo(T,1,Test){//cout<<"Case #"<<T<<":"<<sp;
    solve(T);
  }
  //Time;
  return 0;
}
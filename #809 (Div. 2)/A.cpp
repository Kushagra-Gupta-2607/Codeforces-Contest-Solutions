#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (auto i = (a); i < (b); ++i)
#define per(i, a, b) for (auto i = (b); i > (a); --i)

#define forn(i,n) for(int i = 0; i < (int)n; ++i)
#define mins(x,y) x = min(x,y)
#define maxs(x,y) x = max(x,y)
#define sortva(v) sort(v.begin(), v.end())
#define sortvd(v) sort(v.begin(), v.end(), greater<int>())

#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define ct(x) cout << (x) << endl
#define mod 998244353

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef vector<pii> vpi;
typedef vector<vector<ll>> vvi;
typedef unordered_set<int> ui;
typedef unordered_map<int, int> uii;
const long long INF = 1e18;


void solve(){

    int n, m;
    cin >> n >> m;
    string s(m, 'B'), ans(m, 'B');
    for(int i = 0; i<n; i++){
        int idx;
        cin >> idx;
        idx = min(idx-1, m-idx);
        if(s[idx] == 'A') s[m-1-idx] = 'A';
        else s[idx] = 'A';
        ans = min(ans, s);
    }
    ct(ans);   


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);


    int t=1;
    cin >> t;
    while(t--){
        solve();
    }



    return 0;
}

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

    int n;
    cin >> n;
    vvi dp(n, vi(2, 0));
    
    forn(i, n){
        int z; cin >> z; --z;
        dp[z][i&1] = max(dp[z][i&1], dp[z][(i+1)&1] + 1); 
    }

    forn(i, n){
        cout << max(dp[i][0], dp[i][1]) << " ";
    }
    cout << endl;
    
    // Another Possible Solution
    /*
    int n;
    cin >> n;
    vi last(n, -1), ans(n, 0);
    
    forn(i, n){
        int z; cin >> z; --z;
        if(last[z] != -1){
            if((last[z]+i) & 1) ans[z]++, last[z] = i;
        }
        else last[z] = i, ans[z]++;
    }
    
    forn(i, n){
        cout << ans[i] << " ";
    }
    cout << endl;
    */

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

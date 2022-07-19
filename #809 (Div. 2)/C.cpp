/*
All Credits to "tourist" sir.
Learned a lot from his written code
Kind of a copy of his code below....
*/

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
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpi;
typedef vector<vector<ll>> vvi;
typedef unordered_set<int> ui;
typedef unordered_map<int, int> uii;
const long long INF = 1e18;


void solve(){

    int n;
    cin >> n;
    
    vi v(n);
    vll pref(n), suf(n);
    
    forn(i, n) cin >> v[i];
    
    for(int i = 1; i<n-1; i++){
        pref[i] = pref[i-1];
        if(i&1){
            int target = max(v[i-1], v[i+1]) + 1;
            int need = max(0, target - v[i]);
            pref[i] += need;
        }
    }
    if(n&1){
        ct(pref[n-2]);
        return;
    }
    
    for(int i = n-2; i>0; i--){
        suf[i] = suf[i+1];
        if(i%2 == n%2){
            int target = max(v[i-1], v[i+1]) + 1;
            int need = max(0, target - v[i]);
            suf[i] += need;
        }
    }
    
    ll ans = INF;
    for(int i = 1; i<n; i+=2){
        ans = min(ans, pref[i-1] + suf[i]);
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

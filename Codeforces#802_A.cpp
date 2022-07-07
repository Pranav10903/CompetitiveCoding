#include<bits/stdc++.h>
using namespace std;
#define vec vector<int>
#define vecp vector<pair<int,int>>
#define vecc vector<vector<int>>
#define pb push_back
#define fr first
#define sc second
#define fr1(i,a,b) for(int i = a; i < b; i++)
#define fr2(i,a,b) for(int i = a; i >= b; i--)
#define fr3(i,a,b) for(int i = a; i <= b; i++)
#define pr pair<int,int>
#define mod 1000000007
#define mod1 998244353
#define all(v) (v).begin(),(v).end()
#define sz(x) (int)(x).size()
#define ppb pop_back
#define ins insert
#define int long long

void write(vec &v){
    for(auto i:v)
        cout << i << " ";
    cout << "\n";
}

void read(vec &v){
    for(auto &i:v)
        cin >> i;
}

const int INF = 1e9;
const int64_t INFF = 1e18;
const int N = 1e6+69;

void solve(){
    int n,m;
    cin >> n >> m;
    int ans = n*(n - 1)/2 * m + m * (m - 1)/2 + n*m;
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    fr3(i,1,t){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}

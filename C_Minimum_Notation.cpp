// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

// Libary 
#include<bits/stdc++.h>
using namespace std;

// Type definition
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;

// Loop 
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)

// Printing statement
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define nl cout<<"\n"
#define printArray(v) for(auto k:v)cout<<k<<" "

// STL operation 
#define pb push_back
#define in insert
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

// Precalculation
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

ll lenN(ll n)
{
    ll res = 0;
    while (n != 0)
    {
        res++;
        n /= 10;
    }
    return res;
}

// Solution Start Here
void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    char mn = '9';
    loopR(i,n-1,0,1){
        mn = min(s[i], mn);
        if(s[i]!='9' and s[i]>mn)
            s[i]++;
    }
    asc(s);
    for(auto k:s)
        cout << k;
    nl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

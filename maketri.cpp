# Problem Link: https://www.codechef.com/FEB17/problems/MAKETRI

#include<bits/stdc++.h>
using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define rep(i,n) for(int i=0;i<(n);++i)
#define sd(n) scanf("%d",&n)
#define sdll(n) scanf("%lld",&n)
#define prn(n) printf("%d\n",n)
#define prnll(n) printf("%lld\n",n)
#define pb(n) push_back(n)
#define MOD 1000000007
#define MAX 32000


const int INF = 1<<29;
typedef unsigned long long ll;

inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
////////////////////////////////////////////////////////////////////////////////
class range
{
public:
    ll x,y;
    range(ll a,ll b)
    {
        x=a;y=b;
    }
};

bool compare(range a,range b)
{
    if(a.x != b.x)
        return a.x < b.x;
    else
        return a.y < b.y;
}

vector<range>vec;
stack<ll>s;
inline void fillit(ll x,ll y)
{
    vec.pb(range(x,y));
}

void findcomman(ll a1,ll a2, ll b1,ll b2)
{
    if((a2 < b1 and a1<b1) or ( b2<a1 and  b2<a2))
        return ;

    ll x = min(a1,b1);
    ll y = max(a2,b2);

    if(x==a1)
        {
        if(y==a2)
            fillit(b1,b2);
        else
            fillit(b1,a2);
        }
    else
    {
        if(y==a2)
            fillit(a1,b2);
        else
            fillit(a1,a2);
    }
}


int main()
{
    int n;
    ll l, r;
    sd(n); sdll(l); sdll(r);
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        sdll(v[i]);

    sort(v.begin(), v.end());

    for(int i=0;i<n-1;i++)
    {
        ll be = v[i+1]-v[i]+1;
        ll en = v[i+1] +v[i]-1;
        findcomman(be,en,l,r);
    }

    sort(vec.begin(),vec.end(),compare);

    int k = vec.size();
    ll ans = 0;

    if(k== 0)
    {
        cout << 0 << endl;
        return 0;
    }

    s.push(vec[0].x);
    s.push(vec[0].y);



    for(int i=1;i<k;i++)
    {
        ll x = vec[i].x , y = vec[i].y ;
        ll en = s.top() ; s.pop() ; ll be = s.top(); s.push(en);
        if(x > en)
        {
            s.push(x);
            s.push(y);
        }
        else
        {
           if(y <= en)
           {
               continue;
           }
           else
           {
               s.pop();
               s.push(y);
           }
        }
    }

    int pp = s.size();
    for(int i=0;i<pp;i+=2)
    {
        ll en = s.top() ; s.pop() ; ll be = s.top(); s.push(en);
        s.pop();s.pop();
        ans+=(en-be+1);
    }

    prnll(ans);
    return 0;
}

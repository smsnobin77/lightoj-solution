#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<ll, ll> mp;
ll a, b, c, d, e, f,z,ara[1000009];
ll fn( ll n ) {
    cout<<n<<endl;
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if( ara[n] == -1 ){
        z = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )%10000007;
        cout<<"z "<<z<<endl;
        cout<<"n "<<n<<endl;
        mp[n] = z;
        cout<<"zn "<<n<<endl;
        cout<<"mp[n]"<<mp[n]<<endl;
        ara[n]++;
    }
    else{
        z = mp[n];
    }
    return z;
}
int main() {
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        memset(ara,-1, sizeof ara);
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        mp[0] = a;
        mp[1] = b;
        mp[2] = c;
        mp[3] = d;
        mp[4] = e;
        mp[5] = f;
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
        mp.clear();
    }
    return 0;
}

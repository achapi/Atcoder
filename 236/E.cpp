/**
  date : 2022年01月23日21時57分20秒
  author : achapi
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n;cin>>n;
    ll s=0;
    vector<ll> a(n);
    rep(i, n){
        ll b;cin>>b;
        a[i]=b;
        s+=b;
    }
    double d = s/n;
    
    //code end
    return 0;
}
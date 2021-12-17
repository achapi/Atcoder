/**
  date : 2021年12月11日22時09分48秒
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
    ll n,m,x,y;cin>>n>>m;
    vector<ll> a(n);
    rep(i, m){
        cin>>x>>y;
        a[x-1]++;
        a[y-1]++;
    }
    rep(i, n){
        if(a[i]>2){
            cout<<"No"<<endl;
            return 0;
        }
    }
    rep(i, n){
        if(a[i]!=2){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    //code end
    return 0;
}
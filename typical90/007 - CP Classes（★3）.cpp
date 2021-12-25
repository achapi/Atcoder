/**
  date : 2021年12月17日22時48分23秒
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
    ll n;cin>>n;
    vector<ll> a(n);
    rep(i, n){
      cin>>a[i];
    }
    ll q;cin>>q;
    vector<ll> b(q);
    rep(i, q){
      cin>>b[i];
    }

    sort(all(a));
    ll ub,lb,lb2;
    rep(i, q){
      lb2 = *lower_bound(all(a), b[i]);
      if(lb2 == b[i]) lb = lb2;
      else {
        if(lower_bound(all(a), b[i])-a.begin()-1<0)lb = a[lower_bound(all(a), b[i])-a.begin()];
        else lb = a[lower_bound(all(a), b[i])-a.begin()-1];
      }
      ub = *upper_bound(all(a), b[i]);
      if(abs(b[i]-lb)>abs(b[i]-ub)){
        cout << abs(b[i]-ub) << endl;
      }else{
        cout << abs(b[i]-lb) << endl;
      }
    }
    //code end
    return 0;
}
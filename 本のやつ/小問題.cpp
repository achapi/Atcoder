/**
  date : 2022年01月16日22時42分15秒
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
    vector<ll> a(100000);
    int b;
    rep(i, n){
      cin>>b;
      a[b]++;
    }
    ll ans=0;
    for(int i=1;i<50000;i++){
      ans+=(a[i]*a[100000-i]);
    }
    ans+=(a[50000]*(a[50000]-1)/2);
    cout<<ans;
    //code end
    return 0;
}
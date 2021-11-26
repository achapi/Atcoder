/**
  date : 2021年11月25日23時03分34秒
  author : achapi
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<endl

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n;cin>>n;
  int ans = 0;
  vector<ll> a(n);
  rep(i, n){
      cin>>a[i];
  }
  bool kisuu = false;
  while(!kisuu){
    rep(i, n){
          if(a[i]%2==1){
            kisuu = true;
            break;
          }
          a[i]/=2;
    }
    if(kisuu)break;
    ans++;
  }
  co(ans);
  //code end
  return 0;
}
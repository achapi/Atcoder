//ゴミ！！！！！！！！！！！！！！！！！！！！！！


/**
  date : 2021年12月03日21時25分09秒
  author : achapi
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (unsigned long long i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<'\n'
#define all(v) v.begin(), v.end()

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  ll n,a,b,p,q,r,s,k;cin>>n>>a>>b>>p>>q>>r>>s;
  string ans;
  vector<vector<ll>>map (q-p+1,vector<ll>(s-r+1));
  rep(i, min(n-a,n-b) - max(1-a,1-b) + 1){
      k = max(1-a,1-b) + i;
      if( (p<=(a+k) && (a+k)<=q) && (r<=(b+k) && (b+k)<=s) ){
          map[a+k-p][b+k-r] = 1;
      }
  }
  rep(i, min(n-a,b-1) - max(1-a,b-n) + 1){
      k = max(1-a,b-n) + i;
      if( (p<=(a+k) && (a+k)<=q) && (r<=(b-k) && (b-k)<=s) ){
          map[a+k-p][b-k-r] = 1;
      }
  }
 
  rep(i, q-p+1){
      ans="";
      rep(j, s-r+1){
          if(map[i][j] == 0)ans+=".";
          else ans+="#";
      }
      co(ans);
  }
  //code end
  return 0;
}
/**
  date : 2021年11月28日21時03分24秒
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
#define co(x) cout<<(x)<<'\n'
#define all(v) v.begin(), v.end()

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  //code start
  int n,i;cin>>n;
  ll ans,a;
  ans=0;a=0;
  string s;cin>>s;
  i=0;
  while(i<=n){
      if(s[i] == s[i+1]){
          a++;
      }else{
        ans+=(a+1)*a;
        a=0;
      }
      i++;
  }
  co((ans/2));
  //code end
  return 0;
}
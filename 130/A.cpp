/**
  date : 2021年11月28日21時03分24秒
  author : achapi
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<'\n'
#define all(v) v.begin(), v.end()

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
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
        co(a);
        if(a!=0)ans+=(a+1)*a;
        a=0;
      }
      i++;
  }
  co((ans/2));
  //code end
  return 0;
}
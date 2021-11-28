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
  int n,i,j;cin>>n;
  ll ans,a;
  ans=0;a=0;
  string s;cin>>s;
  i=0;
  while(i<=n){
      if(s[i] == s[i+1]){
          a++;
      }else{
        j=0;
        while(j<=a){
          ans+=j;
          j++;
        }
        a=0;
      }
      i++;
  }
  co(ans);
  //code end
  return 0;
}
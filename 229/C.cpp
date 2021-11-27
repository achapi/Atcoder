/**
  date : 2021年11月27日21時17分42秒
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
  int n,w,g=0;cin>>n>>w;
  unsigned long long ans = 0;
  vector<vector<int>>a (n,vector<int>(2));
  rep(i, n){
      cin>>a[i][0];
      cin>>a[i][1];
  }
  sort(all(a));
  reverse(all(a));
  rep(i, n){
      while(a[i][1] != 0){
          g++;
          a[i][1]--;
          ans+=a[i][0];
          if(g == w){
              co(ans);
              return 0;
          }
      }
  }
  co(ans);
  //code end
  return 0;
}
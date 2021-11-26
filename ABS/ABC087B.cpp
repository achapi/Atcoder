/**
  date : 2021年11月25日23時46分11秒
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
  int a,b,c,x;cin>>a>>b>>c>>x;
  int ans = 0;
  rep(i, a+1){
      rep(j, b+1){
          rep(k, c+1){
              if(500 * i + 100 * j + 50 * k == x)ans++;
          }
      }
  }
  co(ans);
  //code end
  return 0;
}
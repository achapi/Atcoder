/**
  date : 2021年11月26日00時27分26秒
  author : achapi
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<endl
#define all(v) v.begin(), v.end()

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n,y;cin>>n>>y;
  rep(i, n+1){
      rep(j, n+1){
        if(10000 * i + 5000 * j + 1000 * (n-i-j) == y && n-i-j>=0){
            cout<< i << " " << j << " " << n-i-j << endl;
            return 0;
        }
      }
  }
  cout<<-1 << " " << -1 << " " <<-1 <<endl;
  //code end
  return 0;
}
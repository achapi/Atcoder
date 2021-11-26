/**
  date : 2021年11月26日00時15分36秒
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
  int n;cin>>n;
  vector<int> d(n);
  rep(i, n){
      cin>>d[i];
  }
  sort(all(d));
  d.erase(unique(all(d)), d.end());
  co(d.size());
  //code end
  return 0;
}
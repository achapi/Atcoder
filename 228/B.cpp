/**
  date : 2021年11月27日00時17分26秒
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
  int n,x;cin>>n>>x;
  vector<int> a(n);
  rep(i, n){
    cin>>a[i+1];
  }
  vector<int> b(n);
  int ans = 0;
  while(true){
    ans++;
    b[x]=1;
    x=a[x];
    if(b[x]==1){
      co(ans);
      return 0;
    }
  }
  //code end
  return 0;
}
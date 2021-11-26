/**
  date : 2021年11月26日00時01分07秒
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
  vector<int> a(n);
  rep(i, n){
      cin>>a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int x=0,y=0;
  rep(i, n){
      x+=a[i];
      i++;
  }
  rep(i, n){
      i++;
      y+=a[i];
  }
  co(x-y);
  //code end
  return 0;
}
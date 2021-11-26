/**
  date : 2021年11月26日16時09分36秒
  author : achapi
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<'\n'
#define all(v) v.begin(), v.end()
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n;cin>>n;
  vector<vector<int>> a(n, vector<int>(3));
  int x=0,y=0,t=0,sa,time;
  rep(i,n){
    rep(j,3){
      cin>>a[i][j];
    }
    sa=abs(x-a[i][1]) + abs(y-a[i][2]);
    time=a[i][0] - t;
    if(time<sa || sa%2 != time%2){
      co("No");
      return 0;
    }
    t=a[i][0];
    x=a[i][1];
    y=a[i][2];
  }
  co("Yes");
  //code end
  return 0;
}
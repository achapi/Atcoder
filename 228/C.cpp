/**
  date : 2021年11月27日00時27分39秒
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
  int n,k;cin>>n>>k;
  vector<int> p(n);
  rep(i, n){
      int a,b,c;
      cin>>a>>b>>c;
      p[i]=a+b+c;
  }
  vector<int> p2(n);
  copy(all(p),p2.begin());
  sort(all(p));
  reverse(all(p));
  int border = p[k-1];
  rep(i, n){
      if(p2[i]+300>=border){
        co("Yes");
      }else{
        co("No");
      }
  }
  //code end
  return 0;
}
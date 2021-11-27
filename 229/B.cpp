/**
  date : 2021年11月27日21時08分50秒
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
  unsigned long long a,b;cin>>a>>b;
  while(a!=0||b!=0){
      if(a%10 + b%10 >= 10){
          co("Hard");
          return 0;
      }
      a/=10;
      b/=10;
  }
  co("Easy");
  //code end
  return 0;
}
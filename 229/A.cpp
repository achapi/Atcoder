/**
  date : 2021年11月27日21時01分09秒
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
  string s1,s2;cin>>s1>>s2;
  if(s1=="##"){
    co("Yes");
  }
  if(s1==".#"){
    if(s2=="#."){
      co("No");
    }else{
      co("Yes");
    }
  }
  if(s1=="#."){
    if(s2==".#"){
      co("No");
    }else{
      co("Yes");
    }
  }
  if(s1==".."){
    co("Yes");
  }
  //code end
  return 0;
}
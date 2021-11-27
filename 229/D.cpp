/**
  date : 2021年11月27日21時31分09秒
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
  string s,s2;cin>>s;
  int k,x,ans=0,xx,l=0;cin>>k;
  int dot = count(s.cbegin(), s.cend(), '.');
  if(dot<k)k=dot;
  rep(i, dot-k+1){
    s2=s;
    rep(j, i){
      x = s.find(".");
      s.replace(x, 1, "/");
    }
    rep(j, k){
      x = s.find(".");
      s.replace(x, 1, "X");
    }
    xx=0;
    l=0;
    co(s);
    rep(j, s.size()){
        if(s.substr(j, 1) == "X"){
            l++;
        }else{
            if(xx<l)xx=l;
            l=0;
        }
    }
    if(xx > ans)ans = xx;
    s=s2;
  }
  co(ans);
  //code end
  return 0;
}
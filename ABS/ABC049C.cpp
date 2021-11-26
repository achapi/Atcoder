/**
  date : 2021年11月26日01時04分49秒
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
  string s;cin>>s;
  reverse(all(s));
  while(s.find("maerd")==0 || s.find("remaerd")==0 || s.find("esare")==0 || s.find("resare")==0){
      if(s.find("maerd")==0){
        rep(i,5)s.erase(s.begin());
      }
      if(s.find("remaerd")==0){
        rep(i,7)s.erase(s.begin());
      }
      if(s.find("esare")==0){
          rep(i,5)s.erase(s.begin());
      }
      if(s.find("resare")==0){
          rep(i,6)s.erase(s.begin());
      }
  }
  string ans = s.size()==0 ? "YES" : "NO";
  co(ans);
  //code end
  return 0;
}
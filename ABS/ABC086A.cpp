/**
  date : 2021年11月25日22時56分52秒
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
  int a,b;cin>>a>>b;
  if((a*b)%2==0){
    co("Even");
  }else{
    co("Odd");
  }
  //code end
  return 0;
}
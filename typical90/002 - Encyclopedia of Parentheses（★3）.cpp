/**
  date : 2021年12月11日18時32分33秒
  author : achapi
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n;cin>>n;
    if(n%2 == 1)return 0;
    int g;
    for(int i = (1<<n)-1;i--;){

      bitset<20> a(i);
      g=0;
      
      for(int j = n;j--;){
        if(a[j]==1){
          g++;
        }else{
          g--;
        }
        if(g<0){
          g=1000;
          break;
        }
      }
      if(g==0){
        
          for(int j = n;j--;){
            if(a[j]==1){
              cout<<"(";
            }else{
              cout<<")";
            }
          }
          cout<<endl;
        }

    }
    //code end
    return 0;
}
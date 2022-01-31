/**
  date : 2022年01月10日19時22分59秒
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
    int a,b,c;cin>>a>>b>>c;
    if(a<=b)cout<<250;
    else cout<<250+(a-b+(c-1))/c*100;
    //code end
    return 0;
}
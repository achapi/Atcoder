/**
  date : 2021年12月22日00時24分00秒
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
    int h,w;cin>>h>>w;
    if(h==1||w==1)cout<<h*w;
    else cout<<((h/2+h%2)*(w/2+w%2));
    //code end
    return 0;
}
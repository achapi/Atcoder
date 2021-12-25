/**
  date : 2021年12月25日20時32分24秒
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
    unsigned long long a,b,c;cin>>a>>b>>c;
    double x=log2(a),y=log2(c)*b;
    if(x<y)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    //code end
    return 0;
}
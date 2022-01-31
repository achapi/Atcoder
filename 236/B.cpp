/**
  date : 2022年01月23日21時02分40秒
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
    vector<int> a(n);
    rep(i, n*4-1){
        int b;cin>>b;
        a[b]++;
    }
    rep(i, n){
        if(a[i+1]==3){
            cout<<i+1;
            break;
        }
    }
    //code end
    return 0;
}
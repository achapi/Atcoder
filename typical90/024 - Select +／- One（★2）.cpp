/**
  date : 2021年12月18日00時15分37秒
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
    int n,k,b,b2=0;cin>>n>>k;
    vector<int> a(n);
    rep(i, n)cin>>a[i];
    rep(i, n){
        cin>>b;
        b2+=abs(a[i]-b);
    }
    if(b2>k){
        cout << "No" << endl;
        return 0;
    }
    if(b2==k){
        cout << "Yes" << endl;
        return 0;
    }
    if(b2%2==k%2){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    //code end
    return 0;
}
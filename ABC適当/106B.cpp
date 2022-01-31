/**
  date : 2022年01月21日18時03分34秒
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
    if(n>=195){
        cout<<5;
        return 0;
    }
    if(n>=189){
        cout<<4;
        return 0;
    }
    if(n>=165){
        cout<<3;
        return 0;
    }
    if(n>=135){
        cout<<2;
        return 0;
    }
    if(n>=105){
        cout<<1;
        return 0;
    }
    cout<<0;
    //code end
    return 0;
}
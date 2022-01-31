/**
  date : 2022年01月11日02時08分17秒
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
    int q;string s;cin>>q;
    stack<string> book;
    rep(i, q){
        cin>>s;
        if(s=="READ"){
            cout<<book.top()<<endl;
            book.pop();
        }
        else book.push(s);
    }
    //code end
    return 0;
}
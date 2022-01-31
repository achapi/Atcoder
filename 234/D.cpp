/**
  date : 2022年01月08日21時50分20秒
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
    int n,k,p;cin>>n>>k;
    priority_queue<int, vector<int>, greater<int> > q;
    rep(i, k){
        cin>>p;
        q.push(p);
    }
    rep(i, n-k+1){
        cout<<q.top()<<endl;
        cin>>p;
        if(q.top()<p){
            q.pop();
            q.push(p);
        }
    }
    //code end
    return 0;
}
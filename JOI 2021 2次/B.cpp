/**
  date : 2022年01月11日02時18分42秒
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
    vector<vector<char>> s(h,vector<char>(w));
    vector<vector<bool>> v(h,vector<bool>(w,true));
    char cc;
    rep(i, h){
        cin.get(cc);
        rep(j, w){
            cin.get(cc);
            s[i][j]=cc;
        }
    }
    queue<vector<int>> q;
    int h2,w2,c;
    q.push({0,0,0});
    while(!q.empty()){
        h2=q.front()[0];
        w2=q.front()[1];
        c=q.front()[2];
        if(h2==h-1&&w2==w-1){
            cout<<c;
            return 0;
        }
        q.pop();
        if(!v[h2][w2])continue;
        v[h2][w2]=false;
        if(h2>0){
            if(s[h2-1][w2]!=s[h2][w2]){
                if(v[h2-1][w2]){
                    q.push({h2-1,w2,c+1});
                }
            }
        }
        if(h2<h-1){
            if(s[h2+1][w2]!=s[h2][w2]){
                if(v[h2+1][w2]){
                    q.push({h2+1,w2,c+1});
                }
            }
        }
        if(w2>0){
            if(s[h2][w2-1]!=s[h2][w2]){
                if(v[h2][w2-1]){
                    q.push({h2,w2-1,c+1});
                }
            }
        }
        if(w2<w-1){
            if(s[h2][w2+1]!=s[h2][w2]){
                if(v[h2][w2+1]){
                    q.push({h2,w2+1,c+1});
                }
            }
        }
    }
    cout<<-1;
    //code end
    return 0;
}
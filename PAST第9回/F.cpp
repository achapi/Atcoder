/**
  date : 2022年02月01日00時35分51秒
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
    int a,b;cin>>a>>b;
    a--;b--;
    vector<string> s(3);rep(i, 3)cin>>s[i];
    vector<vector<bool>> map(9,vector<bool>(9,false));
    map[a][b]=true;
    function<void(int,int)> move = [&](int x,int y){
        rep(i, 3){
            rep(j, 3){
                if(s[i][j]=='.')continue;
                if(x+i-1>=0&&x+i-1<9){
                    if(y+j-1>=0&&y+j-1<9){
                        if(!map[x+i-1][y+j-1]){
                            map[x+i-1][y+j-1]=true;
                            move(x+i-1,y+j-1);
                        }
                    }
                }
            }
        }
    };
    move(a,b);
    int ans=0;
    rep(i,9){
        rep(j, 9){
            if(map[i][j])ans++;
        }
    }
    cout<<ans;
    //code end
    return 0;
}
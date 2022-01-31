#include <bits/stdc++.h>
using namespace std;int a,b,z,j;main(){cin>>a>>b>>a;map<pair<int,int>,int>m;while(cin>>a>>b)for(j=0;j<9;)z=max(z,++m[{a+j/3,b+j++%3}]);cout<<z;}
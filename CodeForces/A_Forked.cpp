#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vii vector<pair<int,int>>

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a,b,x1,y1,x2,y2;
        cin>>a>>b>>x1>>y1>>x2>>y2;
        vii dirs={{a,b},{-a,-b},{-a,b},{a,-b},{b,a},{-b,-a},{-b,a},{b,-a}};
        set<pair<int,int>> set1,set2;
        for(auto d:dirs){
            int x= x1+d.first;
            int y=y1+d.second;
            set1.insert(make_pair(x,y));
             x= x2+d.first;
             y=y2+d.second;
            set2.insert(make_pair(x,y));
        }
        int ans=0;
        for(auto position:set1){
            if(set2.find(position)!=set2.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

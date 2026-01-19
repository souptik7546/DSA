#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> a(n);
        map<int,int> mp;
        for(auto &p:a){
            cin>>p;
        }
       for(int i=0;i<m;i++){
        int index,value;
        cin>>index>>value;
        index--;
        mp[index]+=value;
        if(mp[index]+a[index]>h){
            mp.clear();
        }
       }
       for(int i=0;i<n;i++){
        cout<<a[i]+mp[i]<<" ";
       }
       cout<<endl;
    }

    return 0;
}

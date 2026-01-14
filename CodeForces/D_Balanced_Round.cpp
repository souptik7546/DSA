#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &pos : v){
            cin>>pos;
        }
        sort(v.begin(),v.end());
        int max=0;
        int count=0;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n>1){
            for(int i=0;i<n-1;i++){
                
                if(v[i+1] - v[i] <= k){
                    count++;
                }
                else if((v[i+1]-v[i])>k){
                    count=0;
                }
                if(count>max){
                    max=count;
                }
            }
            cout<<n-(max+1)<<endl;
        }
}

    return 0;
}

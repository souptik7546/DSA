#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        int sum=0;
        sort(x.begin(), x.end());
        sum+=b;
        for(auto val:x){
            if(val>a-1){
                sum+=a-1;
            }
            else if(val<=a-1){
                sum+=val;
            }
       }
       
       cout<<sum<<endl; 
    }

    return 0;
}

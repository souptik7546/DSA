#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(auto &p:a){
            cin>>p;
        }
        for(int i=0;i<n;i++){
             b[i] = abs((i + 1) - a[i]);
        }
        int ans = b[0];
        for(int i = 1; i < n; i++) {
            ans = gcd(ans, b[i]);  
        }
   
        cout<<ans<<endl;
    }

    return 0;
}

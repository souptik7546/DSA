#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       int n,q;
       cin>>n>>q;
       vector<int> a(n+1);
       
       for(int i=1;i<=n;i++){
        cin>>a[i];
       } 
       vector<int> b(n+1);
       for(int i=1;i<=n;i++){
            b[i]=b[i-1]+a[i];
        }
       while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int sum=b[l-1]+b[n]-b[r]+(k*(r-l+1));
        if(sum%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
    }

    return 0;
}

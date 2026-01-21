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
        vector<int> a(n+1);
        int count=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int l,u;
        l=-1;
        u=-1;
         for(int i=1;i<=n;i++){
            if(a[i]!=0){
                if(l==-1&&u==-1){
                    l=u=i;
                }
                else{
                    u=i;
                }
            }
         }
         if(l==-1){
            cout<<0<<endl;
         }else{
            int mid=0;
         for(int i=l;i<=u;i++){
            if(a[i]==0){
                mid=2;
                break;
            }
         }
         if(mid==2){
            cout<<2<<endl;
         }
         else if(mid==0){
            cout<<1<<endl;
         }
         }
         
    }

    return 0;
}

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
        int max=0;
        for(auto &p:a){
            cin>>p;
        }
        if(n==1){
            cout<<0<<endl;
        }
        else if(n>1){
            for(int i=1;i<n;i++){
                if((a[i]-a[0])>max){
                    max=a[i]-a[0];
                }
            }
            for(int i=0;i<n-1;i++){
                if((a[n-1]-a[i])>max){
                    max=a[n-1]-a[i];
                }
            }
            for(int i=0;i<n-1;i++){
                if((a[i]-a[i+1])>max){
                    max=(a[i]-a[i+1]);
                }
            }
            cout<<max<<endl;
        }
        
    }

    return 0;
}

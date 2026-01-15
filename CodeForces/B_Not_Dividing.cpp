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
        for(auto &p:a){
            cin>>p;
        }
        for(int i=0;i<n;i++){
            if(a[i]==1){
                a[i]=2;
            }
        }
        for(int i=0;i<n-1;i++){
            if((a[i+1]%a[i])!=0){
                continue;
            }
            else if((a[i+1]%a[i])==0){
                a[i+1]=a[i+1]+1;
            }
        }
        for(auto &p:a){
            cout<<p<<" ";
        }
        cout<<endl;
    }

    return 0;
}


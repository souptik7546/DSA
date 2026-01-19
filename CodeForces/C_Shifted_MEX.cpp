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
        sort(a.begin(),a.end());
        int maxcon=0;
        int tempcon=0;
        if(n>1){
            for(int i=0;i<n-1;i++){
            
            if(a[i+1]==(a[i]+1)||a[i+1]==a[i]){
                if(a[i+1]==(a[i]+1)){
                   tempcon++; 
                }
                
            }
            else{
                tempcon=0;
            }
            maxcon = max(maxcon, tempcon);
        }
        }
        
        cout<<maxcon+1<<endl;
    }

    return 0;
}

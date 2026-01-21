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
       for(int i=1;i<=n;i++){
        cin>>a[i];
       } 
       if(n==1){
        cout<<0<<endl;
       }
       if(n>=2){
            bool ispos=true;
                int count=0;
                for(int i=n;i>=2;i--){
                    if(a[i]<i-1){
                        ispos=false;
                        break;
                    }
                    else{
                        while(a[i]<=a[i-1]){
                            a[i-1]=a[i-1]/2;
                            count++;
                        }
                    }
                }
                if(ispos){
                    cout<<count<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
       }
       
    }

    return 0;
}

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
        int count=0;
        for(auto &p:a){
            cin>>p;
        }
        if(n==1){
            if(a[0]==0){
             cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            for(int i=1;i<n-1;i++){
                if(a[i]==0){
                    if(a[i-1]!=0&&a[i+1]!=0){
                        count++;
                        a[i]=1;
                    }
                } 
            }
            int nonZeros=0;
                for(int i=0;i<n;i++){
                    if(a[i]!=0){
                        nonZeros++;
                    }
                    else if(a[i]==0){
                        if(nonZeros>0){
                            count++;
                        }
                    nonZeros=0;
                    }
                }
                if(nonZeros>0){
                           count++;
                           nonZeros=0;
                        }
                cout<<count<<endl;
        }
    }

    return 0;
}

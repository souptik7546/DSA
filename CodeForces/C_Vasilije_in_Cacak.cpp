#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
      int n,k,x;
      cin>>n>>k>>x;
      int count=0;
        for(int i=1;i<=n;i++){
            if(n%2==0){
                count++;
            }
        }
        if(count>2){
            cout<<"YES"<<endl;
        }
        else if(count==2){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

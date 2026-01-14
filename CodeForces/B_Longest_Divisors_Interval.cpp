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
        int max=0;
        if(n%2==1){
            cout<<1<<endl;
        }
        else{
            int i=1;
            while(n%i==0){
                max++;
                i++;
            }
            cout<<max<<endl;
        }
    }

    return 0;
}

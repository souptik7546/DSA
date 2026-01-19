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
        for(int i=0;i<n;i++){
            int temp=0;
            cin>>temp;
            if(temp>max){
                max=temp;
            }
        }

        cout<<(max*n)<<endl;
    }

    return 0;
}


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
        cin >> n;          
        int arr[n];        
        int zeroCount=0;
        int oneCount=0;
        for (int i = 0; i < n; i++) {
             cin >> arr[i]; 
        }
        if(arr[0]==0&&arr[n-1]==0){
            cout<<"Bob"<<endl;
        }
        else if(arr[0]==1 || arr[n-1]){
            cout<<"Alice"<<endl;
        }
    }

    return 0;
}

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
        cin>> n;
        int count=0;
        string s=to_string(n);
        int diff=s[0]-'0';
        for(int i=10;i<=n;i*=10){
            
                count+=9;
            
        }
        if(diff>1){
            count+=diff;
        }
        else{
            count+=1;
        }
        cout<< count<< endl;
       
        
    }

    return 0;
}

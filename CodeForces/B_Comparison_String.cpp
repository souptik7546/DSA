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
        string s;
        cin>>s;
        int temp=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(s[i]=='<'){
                temp++;
            }
            else{
                temp=0;
            }
            if(temp>max){
                max=temp;
            }
        }
        temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='>'){
                temp++;
            }
            else{
                temp=0;
            }
            if(temp>max){
                max=temp;
            }
        }
        cout<<max+1<<endl;
    }

    return 0;
}

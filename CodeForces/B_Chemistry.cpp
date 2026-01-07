#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> smap;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            smap[s[i]]++;
        }
        for(auto &k:smap){
            if(k.second%2==0){
                even+=k.second;
            }
            else{
                odd+=k.second;
            }
        }
        if(k<odd-1){
            cout<< "NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

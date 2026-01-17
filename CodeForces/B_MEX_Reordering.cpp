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
        set<int> s(a.begin(), a.end());
        int zeros=0;
        int ones=0;
        int count=s.size();
        if (s.count(0)) zeros = 1;
        if (s.count(1)) ones = 1;

        if(zeros>0 && ones>0 ){
                if(n==2){
                    cout<<"YES"<<endl;
                }
                else if(count>2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
    }

    return 0;
}

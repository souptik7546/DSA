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
        int min=0;
        if(n%2==1 || n<4){
            cout<<-1<<endl;
        }
        else{
            max=n/4;
            if(n%6==0){
                min=n/6;
            }else{
               min=(n/6)+1;
            }
            cout<<min<<" "<<max<<endl;
        }
    }
    return 0;
}

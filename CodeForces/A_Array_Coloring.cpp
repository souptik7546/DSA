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
        vector<int> a(n), pos(n + 1);


        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }



        bool ok = true;

        for (int v = 1; v < n; v++) {
            if ((abs(pos[v] - pos[v + 1]) % 2) == 0) {
                ok = false;
                break;
            }
        }



        cout << (ok ? "YES" : "NO")<<endl;
    }

    return 0;
}

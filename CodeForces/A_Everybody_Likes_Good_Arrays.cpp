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

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << "\n";
            continue;
        }

        int i = 0;
        while (i < arr.size() - 1) {
            if ((arr[i] % 2) == (arr[i + 1] % 2)) {
                arr[i] *= arr[i + 1];
                arr.erase(arr.begin() + i + 1);
            } else {
                i++;
            }
        }

        cout << n - arr.size() << "\n";
    }

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define io_boost ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl n

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double dd;
typedef long double ldd;

int main() {
    io_boost;


    string s;
    cin >> s;
    int n = (int) s.length(), l = 0, r = 0;
    vector<int> z(n);
    z[0] = n;
    for (int i = 1; i < n; ++i) {
        if (i <= r) {
            z[i] = min(z[i - l], r - i + 1);
        }
        while ((z[i] + i) < n && s[z[i]] == s[z[i] + i]) {
            ++z[i];
        }
        if (r < (z[i] + i - 1)) {
            r = z[i] + i - 1;
            l = i;
        }
    }
    for (int i = 1; i <= n; ++i) {
        int cnt = z[0];
        bool ans = true;
        for (int j = i; j < n; j += i) {
            if (z[j] == (cnt - i)) {
                cnt -= i;
            } else {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

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
    string s, t;
    cin >> s >> t;
    s = t + '$' + s;
    int n = (int) s.length(), l = 0, r = 0;
    vector<int> z(n, 0);
    for (int i = 1; i < n; ++i) {
        if (r >= i) {
            z[i] = min(z[i - l], r - i + 1);
        }
        while ((i + z[i]) < n && s[z[i]] == s[z[i] + i])
            ++z[i];
        if (r < (z[i] + i - 1)) {
            r = z[i] + i - 1;
            l = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (z[i] == t.length()) {
            cout << i - t.length() - 1 << ' ';
        }
    }
    cout << endl;
    return 0;
}

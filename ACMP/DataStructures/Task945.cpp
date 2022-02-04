#include <iostream>
#include <algorithm>
#include <set>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m;
    set<ll> a;
    cin >> n >> m;
    ll x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; ++i) {
        cin >> x;
        if (a.find(x) != a.end()) {
            cout << YES ;
        } else {
            cout << NO ;
        }
    }

    return 0;
}


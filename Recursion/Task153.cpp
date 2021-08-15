#include <iostream>
#include <algorithm>
#include <set>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;
ll mi = 31, change = 0;
ll n, m;
vector<ll> coins;
vector<ll> subset;

void process_subsets(int k) {
    if (k == (m + 1)) {
        ll sum = 0, cnt = 0;
        for (int i = 0; i < subset.size(); ++i) {
            sum = sum + (subset[i] * coins[i]);
            cnt += subset[i];
        }
        if (sum == n) {
            if (cnt < mi)
                mi = cnt;
        } else if (sum > n)
            change = 1;
    } else {
        subset.push_back(0);
        process_subsets(k + 1);
        subset.pop_back();

        subset.push_back(1);
        process_subsets(k + 1);
        subset.pop_back();

        subset.push_back(2);
        process_subsets(k + 1);
        subset.pop_back();
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    coins.resize(m);
    for (int i = 0; i < m; ++i) {
        cin >> coins[i];
    }
    process_subsets(1);
    if (mi != 31)
        cout << mi << endl;
    else if (change != 0)
        cout << 0 << endl;
    else
        cout << -1 << endl;

    return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

#define io_boost ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl n

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double dd;
typedef long double ldd;

bool my_comp(string s1, string s2) {
    return s1.length() > s2.length();
}

bool str_minus(string s1, string s2) {
    int i2 = s2.length() - 1, i1 = s1.length() - 1;
    while (i2 >= 0) {
        if (s1[i1] != s2[i2])
            return false;
        i2--;
        i1--;
    }
    return true;
}

int main() {
    io_boost;
    int ans = 0;
    vector<string> ss;
    set<string> third;
    string s;
    while (s != ENDOFINPUT) {
        cin >> s;
        if (s != ENDOFINPUT) {
            ss.push_back(s);
            third.insert(s);
        }
    }
    sort(ss.begin(), ss.end(), my_comp);
    for (int i = 0; i < ss.size(); ++i) {
        for (int j = i; j < ss.size(); ++j) {
            if (ss[i].length() > ss[j].length() && str_minus(ss[i], ss[j])) {
                string str = ss[i].substr(0, ss[i].length() - ss[j].length());
                if (third.contains(str)) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

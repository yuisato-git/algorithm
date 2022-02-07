// URL: https://atcoder.jp/contests/abs/tasks/abc081_b

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < a.size(); i++) {
        cin >> a.at(i);
    }

    int count = 0;
    while (true) {
        bool all_even = true;
        rep(i, N) {
            if (a.at(i) % 2 == 1) {
                all_even = false;
                break;
            } else {
                a.at(i) /= 2;
            }
        }

        if (all_even) count++;
        else break;
    }

    cout << count << endl;

    return 0;
}

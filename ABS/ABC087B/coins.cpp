// URL: https://atcoder.jp/contests/abs/tasks/abc087_b

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= n; i++)

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int count = 0;
    rep (a, A) {
        rep (b, B) {
            rep (c, C) {
                int total = 500 * a + 100 * b + 50 * c;
                if (total == X) count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}

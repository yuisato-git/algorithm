// URL: https://atcoder.jp/contests/abs/tasks/abc086_a

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if ((a * b) % 2 == 0) cout << "Even" << endl;
    if ((a * b) % 2 == 1) cout << "Odd" << endl;

    return 0;
}

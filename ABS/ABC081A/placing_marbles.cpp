// URL: https://atcoder.jp/contests/abs/tasks/abc081_a

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '1') count++;
    }    

    cout << count << endl;

    return 0;
}

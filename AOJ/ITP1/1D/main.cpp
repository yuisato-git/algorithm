/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D
 * 
 * Write a program which reads an integer S [second] and converts it to h:m:s where h, m, s denote hours, minutes (less than 60) and seconds (less than 60) respectively.
 * 
 * Input:
 *      An integer S is given in a line.
 * Output:
 *      Print h, m and s separated by ':'. You do not need to put '0' for a value, which consists of a digit.
 * Constraints: 
 *      0 ≤ S ≤ 86400
 * ex.)
 *      input: 46979
 *      output: 13:2:59
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S;
    cin >> S;

    int h, m, s;
    h = S / 3600;
    m = S % 3600 / 60;
    s = S % 3600 % 60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}

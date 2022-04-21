/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_B
 * 
 * Write a program which reads three integers a, b and c, and prints "Yes" if a<b<c, otherwise "No".
 * 
 * Input:
 *      Three integers a, b and c separated by a single space are given in a line.
 * Output:
 *      Print "Yes" or "No" in a line.
 * Constraints: 
 *     0 ≤ a, b, c ≤ 100
 * ex1.)
 *      input: 1 3 8
 *      output: Yes
 * 
 * ex2.) 
 *      input: 3 8 1
 *      output: No
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if (a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

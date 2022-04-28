/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
 * 
 * Write a program which reads two integers a and b, and calculates the following values:
 * - a ÷ b: d (in integer)
 * - remainder of a ÷ b: r (in integer)
 * - a ÷ b: f (in real number)
 * 
 * Input:
 *      Two integers a and b are given in a line.
 * Output:
 *     Print d, r and f separated by a space in a line. 
 *     For f, the output should not contain an absolute error greater than 10-5.
 * Constraints: 
 *     1 ≤ a, b ≤ 10^9
 * Example:
 *      input)
 *          3 2
 *      output)
 *          1 1 1.50000
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; 
    cin >> a >> b;

    int d,r;
    double f;
    d = a/b;
    r = a%b;
    f = (double)a/b;
    cout << d << " " << r <<  " " << fixed << setprecision(5) << f << endl;

    return 0;
}

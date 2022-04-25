/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C
 * 
 * Write a program which reads three integers, and prints them in ascending order.
 * 
 * Input:
 *      Three integers a, b and c separated by a single space are given in a line.
 * Output:
 *      Print the given integers in ascending order in a line. Put a single space between two integers.
 * Constraints: 
 *     1 ≤ the three integers ≤ 10000
 * ex.)
 *      input: 3 8 1
 *      output: 1 3 8
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,tmp;
    cin >> a >> b >> c;

    // Determine a is the lowest number.
    if (a > b) {
        tmp = b;
        b = a;
        a = tmp;
    }

    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    // Then, sort b and c.
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}

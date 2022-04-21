/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_A
 * 
 * Write a program which prints small/large/equal relation of given two integers a and b.
 * 
 * Input:
 *      Two integers a and b separated by a single space are given in a line.
 * Output:
 *      For given two integers a and b, print 
 *      a < b if a is less than b, 
 *      a > b if a is greater than b, and
 *      a == b if a equals to b.
 * Constraints: 
 *      -1000 ≤ a, b ≤ 1000
 * ex1.)
 *      input: 1 2
 *      output: a < b
 * 
 * ex2.) 
 *      input: 4 3
 *      output: a < b
 * 
 * ex3.)
 *      input: 5 5
 *      output: a == b
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b) cout << "a < b" << endl;
    else if (a > b) cout << "a > b" << endl;
    else cout << "a == b" << endl;

    return 0;
}

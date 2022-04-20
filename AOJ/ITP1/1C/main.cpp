/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_C
 * 
 * Write a program which calculates the area and perimeter of a given rectangle.
 * 
 * Input:
 *      The length a and breadth b of the rectangle are given in a line separated by a single space.
 * Output:
 *      Print the area and perimeter of the rectangle in a line. The two integers should be separated by a single space.
 * Constraints: 
 *      1 ≤ a, b ≤ 100
 * ex.)
 *      input: 3 5
 *      output: 15 16
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a*b << " " << (a+b)*2 << endl; 

    return 0;
}

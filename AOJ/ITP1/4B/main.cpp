/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B
 * 
 * Write a program which calculates the area and circumference of a circle for given radius r.
 * 
 * Input:
 *      A real number r is given.
 * Output:
 *     Print the area and circumference of the circle in a line. 
 *     Put a single space between them. 
 *     The output should not contain an absolute error greater than 10-5.
 * Constraints: 
 *    0 < r < 10000
 * Example:
 *      input)
 *          2
 *      output)
 *          12.566371 12.566371
 *      
 *      input)
 *          3
 *      output)
 *          28.274334 18.849556
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    cin >> r;

    double area, circumference;
    area = r * r * M_PI;
    circumference = r * 2 * M_PI;

    cout << fixed << setprecision(6) << area << " " << circumference << endl;

    return 0;
}
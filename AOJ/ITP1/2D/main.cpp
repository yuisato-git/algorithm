/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_D
 * 
 * Write a program which reads a rectangle and a circle, and determines whether the circle is arranged inside the rectangle. 
 * The upper right coordinate (W,H) of the rectangle and the central coordinate (x,y) and radius r of the circle are given.
 * 
 * Input:
 *      Five integers W, H, x, y and r separated by a single space are given in a line.
 * Output:
 *      Print "Yes" if the circle is placed inside the rectangle, otherwise "No" in a line.
 * Constraints: 
 *     −100≤x,y≤100
 *     0<W,H,r≤100
 * ex1.)
 *      input: 5 4 2 2 1
 *      output: Yes
 * 
 * ex1.)
 *      input: 5 4 2 4 1
 *      output: No
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;

    if ((x+r <= W  && x-r >= 0) && (y+r <= H  && y-r >= 0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

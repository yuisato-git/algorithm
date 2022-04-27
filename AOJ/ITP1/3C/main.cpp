/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C
 * 
 * Write a program which reads two integers x and y, and prints them in ascending order.
 * 
 * Input:
 *      The input consists of multiple datasets. Each dataset consists of two integers x and y separated by a single space.
 *      The input ends with two 0 (when both x and y are zero). Your program should not process for these terminal symbols.
 * Output:
 *      For each dataset, print x and y in ascending order in a line. Put a single space between x and y.
 * Constraints: 
 *     0 ≤ x, y ≤ 10000
 *     the number of datasets ≤ 3000
 * Example:
 *      input)
 *          3 2
 *          2 2
 *          5 3
 *          0 0
 *      output)
 *          2 3
 *          2 2
 *          3 5
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;

    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0) break;

        if (x > y) cout << y << " " << x << endl;
        else cout << x << " " << y << endl;
    }

    return 0;
}

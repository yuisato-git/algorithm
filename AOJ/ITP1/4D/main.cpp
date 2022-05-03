/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D
 * 
 * Write a program which reads a sequence of n integers ai(i=1,2,...n), 
 * and prints the minimum value, maximum value and sum of the sequence.
 * 
 * Input:
 *      In the first line, an integer n is given. In the next line, n integers ai are given in a line.
 * Output:
 *     Print the minimum value, maximum value and sum in a line. Put a single space between the values.
 * Constraints: 
 *    0<n≤10000
 *    −1000000≤ai≤1000000
 * Example:
 *      input)
 *          5
 *          10 1 5 4 17
 *      output)
 *          1 17 37
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int min, max;
    // maximum of int is　2,147,483,647. Use long(9,223,372,036,854,775,807) if int is not enough.
    long sum;
    min = 1000000;
    max = -1000000;
    sum = 0;

    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a < min) min = a;
        if (a > max) max = a;

        sum += a;
    }

    cout << min << " " << max << " " << sum << endl;
    return 0;
}

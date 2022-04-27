/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D
 * 
 * Write a program which reads three integers a, b and c, and prints the number of divisors of c between a and b.
 * 
 * Input:
 *      Three integers a, b and c are given in a line separated by a single space.
 * Output:
 *      Print the number of divisors in a line.
 * Constraints: 
 *     1 ≤ a, b, c ≤ 10000
 *     a ≤ b
 * Example:
 *      input)
 *          5 14 80
 *      output)
 *          3
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    cin >> a >> b >> c;

    n = 0;
    for (int i = a; i <= b; i++)
    {
        if (c % i == 0) n++;
    }
    
    cout << n << endl;

    return 0;
}

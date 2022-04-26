/**
 * https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B
 * 
 * In the online judge system, a judge file may include multiple datasets to check whether the submitted program outputs a correct answer for each test case. 
 * This task is to practice solving a problem with multiple datasets.
 * Write a program which reads an integer x and print it as is. Note that multiple datasets are given for this problem.
 * 
 * Input:
 *      The input consists of multiple datasets. Each dataset consists of an integer x in a line.
 *      The input ends with an integer 0. You program should not process (print) for this terminal symbol.
 * Output:
 *      For each dataset, print x in the following format:
 *      Case i: x
 *      where i is the case number which starts with 1. Put a single space between "Case" and i. 
 *      Also, put a single space between ':' and x.
 * Constraints: 
 *     1 ≤ x ≤ 10000
 *     The number of datasets ≤ 10000
 * Example:
 *      omit.
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i;
    i = 1;
    while (true)
    {
        cin >> x;
        if (x == 0) break;
        else cout << "Case " << i << ": " << x << endl;
        i++;
    }
    

    return 0;
}

// URL: https://atcoder.jp/contests/abs/tasks/abc083_b

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int sumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { 
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{   
    int N, A, B;
    cin >> N >> A >> B;

    int total = 0;
    for (int i = 1; i <= N; i++) {
        int sum = sumOfDigits(i);
        if (sum >= A && sum <= B) total += i;
    }

    cout << total << endl;
    return 0;
}

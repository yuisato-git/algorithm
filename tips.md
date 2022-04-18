# TIPS

問題を解く上での気づきや注意点を書き記します。

## 累乗で`std:pow`を使う場合に、数が大きいと`e+0N`と表示される

問題
https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_B

→ input が`100`の場合、,`pow`を使うと`1e+06`と表示されてしまう。
→ 素直に`x*x*x`と実装する。

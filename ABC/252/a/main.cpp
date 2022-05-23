#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    // vector<string> alphabet = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    // map<string, string> alphabetMap;
    // alphabetMap["97"] = "a";

    // int aschiiNum = 97;
    // for (int i = 0; i < alphabet.size(); i++)
    // {
    //     alphabetMap[to_string(aschiiNum)] = alphabet.at(i);
    //     aschiiNum++;
    // }

    // cout << alphabetMap[to_string(N)] << endl;

    cout << (char)N << endl;

    return 0;
}

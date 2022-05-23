#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
int main()
{
    // int N;
    // cin >> N;

    // map<int, int> numCount = { {0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0} };

    // vector<string> S;
    // vector<vector<int>> slots; 
    // for (int i = 0; i < N; i++)
    // {
    //     string s;
    //     cin >> s;

    //     vector<int> slot;
    //     for (int j = 0; j < 10; j++)
    //     {
    //         slot.at(j) = s.at(j);
    //     }

    //     slots.at(i) = slot;
        
    // }

    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    int ans = 1001001001;
    rep(x, 10) {
        char c = '0'+x;
        vector<int> num(10);
        rep(i,n) {
            rep(j,10) if (s[i][j] == c) num[j]++;
        }
        int now = 0;
        rep(i, 10) {
            int t = i+10*(num[i]-1);
            now = max(now, t);
        }
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> tasteScores(N), b(K);
    // int maxScore = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     int A;
    //     cin >> A;
    //     tasteScores.at(i) = A;

    //     if (maxScore < A) maxScore = A;
    // }

    rep(i,N) cin >> tasteScores[i];
    rep(i,K) cin >> b[i];
    int mx = 0;
    rep(i, N) mx = max(mx, tasteScores[i]);
    rep(i, K) {
        if (tasteScores[b[i]-1] == mx) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    // vector<int> maxTasteScoreIndexes;
    // for (int i = 0; i < N; i++)
    // {
    //     if (tasteScores.at(i) == maxScore) maxTasteScoreIndexes.push_back(i+1);
    // }

    // bool isMaxTasteInDislike = false;
    // for (int i = 0; i < K; i++)
    // {
    //     int B;
    //     cin >> B;

    //     if (find(maxTasteScoreIndexes.begin(), maxTasteScoreIndexes.end(), B) != maxTasteScoreIndexes.end()) {
    //         isMaxTasteInDislike = true;
    //         break;
    //     } 
    // }


    // if (isMaxTasteInDislike) cout << "Yes" << endl;
    // else cout << "No" << endl;

    return 0;
}

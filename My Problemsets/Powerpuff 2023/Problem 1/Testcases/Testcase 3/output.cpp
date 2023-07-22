#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("Input 3.txt", "r", stdin);
    freopen("Output 3.txt", "w", stdout);
    unordered_map <string, int> map;

    map["String"]=0, map["Stack"]=1, map["Queue"]=2, map["Hashing"]=3, map["Searching"]=4;
    map["Recursion"]=5, map["DP"]=6, map["Graph"]=7, map["Tree"]=8, map["Maths"]=9;
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> scores(n);
        vector<bitset<10>> skills(n);

        for (int i = 0; i < n; i++) {
            int m, c;
            cin >> m >> c;
            scores[i] = m;

            for (int j = 0; j < c; j++) {
                string skill;
                cin >> skill;

                skills[i].set(map[skill]);
            }
        }

        int maxTotalScore = 0;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    bitset<10> combinedSkills = skills[i] | skills[j] | skills[k];

                    if (combinedSkills.count() == 10) {
                        int totalScore = scores[i] + scores[j] + scores[k];
                        maxTotalScore = max(maxTotalScore, totalScore);
                    }
                }
            }
        }

        cout << maxTotalScore << endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
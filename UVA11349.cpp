#include <iostream>
#include <vector>
using namespace std;

bool CheckSym(vector<vector<int>> M) {
    for (int i = 0; i < M.size(); i++) {
        for (int j = 0; j < M.size(); j++) {
            if (i == j && i != 0) {
                break;
            }
            if (M[i][j] != M[M.size() - 1 - i][M.size() - 1 - j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int N;
        bool minus = false;
        vector<string> garbage(2);
        for (int i = 0; i < 2; i++) {
            cin >> garbage[i];
        }
        cin >> N;
        vector<vector<int>> M(N, vector<int>(N));
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                cin >> M[j][k];
                if (M[j][k] < 0) {
                    minus = true;
                }
            }
        }
        cout << "Test #" << i + 1 << ": ";
        if (minus) {
            cout << "Non-symmetric." << endl;
        }
        else {
            if (CheckSym(M)) cout << "Symmetric." << endl;
            else cout << "Non-symmetric." << endl;
        }
    }
}

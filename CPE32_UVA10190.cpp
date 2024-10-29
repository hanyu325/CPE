#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> A) {
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << ' ';
    }
    cout << endl;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 || m == 0) {
            cout << "Boring!" << endl;
            continue;
        }

        vector<int> seq;
        seq.push_back(n);

        while (n > 1) {
            if (n % m != 0) {
                cout << "Boring!" << endl;
                break;
            }
            n = n / m;
            seq.push_back(n);
            if (n == 1) {
                PrintArray(seq);
            }
        }
    }
}

#include <iostream>
#include <vector>
using namespace std;

int TrainSwap(vector<int> t) {
    int tmp;
    int sw = 0;
    for (int i = int(t.size()) - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (t[j] > t[j + 1]) {
                tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
                sw++;
            }
        }
    }
    return sw;
}

int main() {
    int c;
    int s;
    int tmp;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> s;
        vector<int> train;
        for (int j = 0; j < s; j++) {
            cin >> tmp;
            train.push_back(tmp);
        }
        int sw = TrainSwap(train);
        cout << "Optimal train swapping takes " << sw << " swaps." << endl;
    }
}

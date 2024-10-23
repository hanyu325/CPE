#include <iostream>
#include <string>
using namespace std;

int Dec(int num) {
    int cnt = 0;
    while (num / 2 >= 1) {
        if (num % 2 == 1) {
            cnt++;
        }
        num /= 2;
    }
    if (num == 1) cnt++;
    return cnt;
}

int Hex(string num) {
    int cnt = 0;
    int n;
    for (int i = 0; i < num.size(); i++) {
        n = num[i] - '0';
        while (n / 2 >= 1) {
            if (n % 2 == 1) {
                cnt++;
            }
            n /= 2;
        }
        if (n == 1) cnt++;
    }
    return cnt;
}

int main() {
    int c, b1, b2;
    string num;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> num;
        b1 = Dec(stoi(num));
        b2 = Hex(num);
        cout << b1 << ' ' << b2 << endl;
    }
}

#include <iostream>
using namespace std;

int add(int n) {
    int sum = 0;
    while (n / 10 > 0) {
        sum += (n % 10);
        n = n / 10;
    }
    sum += n;
    if (sum / 10 > 0) return add(sum);
    else return sum;
}

int main() {
    int num;
    while (cin >> num) {
        if (num == 0) break;
        if (num / 10 == 0) {
            cout << num << endl;
        }
        else {
            int sum = add(num);
            cout << sum << endl;
        }
    }
}

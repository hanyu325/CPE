// 33. Simply Emirp

#include <iostream>
using namespace std;

int Reverse(int n) {
    int sum = 0;
    while (n) {
        sum = (sum * 10) + (n % 10);
        n /= 10;
    }
    return sum;
}

bool Prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        // if not prime, return 0
        if (n % i == 0) return 0;
    }

    // if prime, return 1
    return 1;
}

int main() {
    int num;
    while (cin >> num) {
        if (Prime(num)) {    // if num is prime
            // reverse the num
            int rn = Reverse(num);


            // if reverse num is prime
            if (Prime(rn)) cout << num << " is emirp." << endl;

            // if reverse num is not prime
            else cout << num << " is prime." << endl;
        }
        else {    // if num is not prime
            cout << num << " is not prime." << endl;
        }
    }
}

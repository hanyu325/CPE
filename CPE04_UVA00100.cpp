// CPE 4. The 3n + 1 Problem

#include <iostream>
#include <algorithm>
using namespace std;

int func(int n) {
    int count = 1;

    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        }
        else {
            n /= 2;
        }
        count++;
    }

    return count;
}

int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        cout << num1 << ' ' << num2 << ' ';
        int MaxCount = 0;

        // Because we not sure num1 will smaller than num2, so I add this code to ensure num1 will not larger than num2.
        if (num1 > num2) swap(num1, num2);
        
        for (int i = num1; i <= num2; i++) {
            if (MaxCount < func(i)) MaxCount = func(i);
        }
        cout << MaxCount << endl;
    }
}

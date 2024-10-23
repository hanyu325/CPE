#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    while (cin >> num) {
        if (num == "0") break;
        int n = 0;
        int count = 0;
        for (int i = 0; i < num.size(); i++) {
            n += num[i] - '0';
        }
        count++;
        int sum = n;
        while (sum / 10) {
            sum = 0; 
            while (n) {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
            count++;
        }
        if (sum % 9 == 0) cout << num << " is a multiple of 9 and has 9-degree " << count << "." << endl;
        else cout << num << " is not a multiple of 9." << endl;
    }
}

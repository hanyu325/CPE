// CPE 28. Parity

#include <iostream>
#include <stack>
using namespace std;

void PrtStk(stack<int> stk) {
    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
}

int main() {
    int num;
    while (cin >> num) {
        if (num == 0) break;

        stack<int> binary;  // binary number of num, because stack is last in first out (LIFO)
        int cnt = 0;        // to count the number of one in the binary number

        while (num) {
            if (num % 2 == 1) cnt++;
            binary.push(num % 2);
            num /= 2;
        }

        cout << "The parity of ";
        PrtStk(binary);
        cout << " is " << cnt << " (mod 2)." << endl;
    }
}

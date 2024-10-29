#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int max_s = 0;
    string s;
    vector<string> str;
    while(getline(cin, s)){
        str.push_back(s);
        if (max_s < s.size()) max_s = s.size();
    }
    for (int i = 0; i < max_s; i++) {
        for (int j = str.size() - 1; j >= 0; j--) {
            if (i > str[j].size() - 1) cout << ' ';
            else cout << str[j][i];
        }
        cout << endl;
    }
}

#include <iostream>
#include <iomanip>    // setprecision() header
#include <cmath>
using namespace std;

int main() {
    int c;
    double n;    // number of players
    double p;    // probability of the happening of successful event in a single throw
    double w;    // the winner
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> n >> p >> w;
        if (p == 0) {
            cout << 0.0000 << endl;
            continue;
        }
        double ans = pow(1.0 - p, w - 1.0) * p * (1.0 /( 1.0 - pow(1.0 - p, n) ));
        cout << fixed << setprecision(4) << ans << endl;
    }
}

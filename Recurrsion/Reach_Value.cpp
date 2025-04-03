#include <iostream>
using namespace std;

bool Reach_Value(long long n) {
    if (n == 1) return true;
    if (n < 1) return false;

    if (n % 10 == 0 && Reach_Value(n / 10)) return true;
    if (n % 20 == 0 && Reach_Value(n / 20)) return true;

    return false;
}

int main() {
    int T; // no of time input
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;
        if (Reach_Value(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

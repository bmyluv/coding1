#include <iostream>
#include <cmath>   // for sqrt()
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;\
    cout << "Divisors of " << n << " are: ";
    // Loop only up to sqrt(n)
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";       // i is a divisor
            if (i != n / i) {       // avoid repeating when i*i == n
                cout << n / i << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter a number : ";
    cin >> n;
    if (n < 1) {
        cout << "The number can't be negative" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    } 
    return 0;
}
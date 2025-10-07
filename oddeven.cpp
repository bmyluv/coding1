#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Your numbers are: ";
    for (int i; i <= n; i++){
        if (i % 2 == 0){
            
            cout << i << " ";
        }
        }
    return 0;
    }
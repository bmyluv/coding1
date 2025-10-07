// 4.	Viết chương trình nhập vào số n và in ra màn hình dãy như sau: 1 3 5......n .... 6 4 2 
// ( nghĩa là dãy số có các số nguyên dương lẻ nhỏ hơn n nằm bên tay trái còn các số chẵn sẽ nằm bên tay phải.) 
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cout << "Input a number: ";
    cin >> n;
    for (int i = 1; i <= n; i += 2){
        cout << i << " ";
    }
    cout << n << " ";
    for (int i = n - 1; i >= 2; i--){
        if (i%2 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
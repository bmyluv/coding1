	Viết chương trình nhập vào 1 số n và in ra màn hình các số nguyên tố trong khoảng từ 1 tới 2n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap gia tri n ";
    cin >> n;
    
    if (n <= 0){
        cout << "n phai la so duong: ";
        return 0;
    }
    cout << "Cac so nguyen to tu 1 den 2n la ";
    for (int i = 2; i <= 2 * n; i++){
        bool isprime = true;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
            isprime = false;
            break;
            }
        }
        if (isprime){
        cout << i << " ";
        }
    }
    return 0;
}
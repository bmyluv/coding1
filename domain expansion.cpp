// 1.	Viết chương trình nhập vào 2 số a,b và in ra màn hình các 
// số nguyên tố trong khoảng bị giới hạn bởi a và b (Mọi người lưu ý là a,b nhập ngẫu nhiên nhé!)

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap gia tri a, b: ";
    cin >> a >> b;
    cout << "Cac gia tri trong mien co gia tri chan la: ";   
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << ", Cac gia tri le la: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl; // end the output neatly
    return 0;
}

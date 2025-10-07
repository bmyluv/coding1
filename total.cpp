//5.	Viết chương trình nhập vào số nguyên dương n và in ra màn hình tổng các số chẵn khoảng từ 1 tới n.

#include <iostream>
using namespace std;

int main (){
    int n, total = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    if (n < 0){
        cout << "Vui long nhap so nguyen duong ";
    }
    for (int i = 2; i <= n; i+=2){
        total += i;
    }
        cout << "Total of i = " << total << endl;       
    return 0;
}
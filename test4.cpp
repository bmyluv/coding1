// 1.	Viết chương trình nhập vào 2 số a,b và in ra màn hình các 
// số nguyên tố trong khoảng bị giới hạn bởi a và b (Mọi người lưu ý là a,b nhập ngẫu nhiên nhé!)
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Input a and b: ";
    cin >> a >> b;
    if (a < 0){
        cout << "a must be a positive integer ";
        return 0;
    }
    cout << "Prime numbers between a and b: ";
    for (int i = a; i <= b; i++){
    
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
            cout << i << " ";
        }
    }
    return 0;
}
//Nhập số nguyên n (50<=n<=59), khi nhập số, chương trình tự ép ra chữ


#include <iostream>
using namespace std;
int main () {
    cout << "Nhập số nguyên n (50<=n<=59)";
    cout << " khi nhập số, chương trình tự ép ra chữ ";
    int n,k;
    do {
        cin >> n;
    } while (n<50 || n >59);

    k=n%10;
    cout << "\n Năm mươi ";
    switch (k)
    {
    case 1:
        cout << "mốt";
        break;
    
    case 2:
        cout << "hai";
        break;
    
    case 3:
        cout << "ba";
        break;
    case 4:
        cout << "bốn";
        break;
    case 5:
        cout << "lăm";
        break;
    case 6:
        cout << "sáu";
        break;
    case 7:
        cout << "bảy";
        break;
    case 8:
        cout <<"tám";
        break; 
    case 9:
        cout << "chín";
        break;
    }

    return 0;
}
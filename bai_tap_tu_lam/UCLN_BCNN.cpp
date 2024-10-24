#include <iostream>
using namespace std;
int main () {
    /*Ước chung lớn nhất bằng hiệu của hai số*/
    int a,b;
    cout << "a,b= "; cin >> a >> b;
    int temp_a=a,temp_b=b;
    while (a!=b) {
        if (a>b) {a-=b;}
        else {b-=a;}
    }
    /*bội chung nhỏ nhất bằng tích hai số chia cho ước chung lớn nhất*/
    int c;
    c=temp_a*temp_b;
    c=c/a;
    cout << a << "\n" << c;
        

    return 0;
}


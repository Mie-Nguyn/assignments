#include <iostream>
using namespace std;

int NhapSo(int x) {
    do {
        cout << "Nhap so nguyen ";
        cin>>x;
    }while (x<=0 || x>100);
    return x;
}

bool KtraSNT (int n) {
    int i;
    for (i=2; i<n; i++) {
            if (n%i==0) {return false;}
        }
    return true;
}

int sumSNT (int n) {
    int i,j,sum=0;
    for (i=2; i<n; i++) {
        if (KtraSNT (i) == true) {sum+=i;}
        }
    return sum;
}



int main () {
    int n;
    NhapSo(n);
    cout << sumSNT (n);
    return 0;
}

//chưa xong



#include <iostream>
using namespace std;
int main() {
    int n,x1,x2,tmp;
    do {
        cin>>n;
    } while(n<10 || n>100);

    x1=1;
    x2=1;
    cout << "1 1 ";
    do {
        cout << x1+x2 << " ";
        tmp=x1;
        x1=x2;
        x2=tmp+x1;
    } while (x2<=n);

    return 0;
}
    
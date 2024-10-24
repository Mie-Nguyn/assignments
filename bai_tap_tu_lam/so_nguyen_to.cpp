#include <iostream>
using namespace std;
int main() {
    int i,j,k,n;
    do {
        cin>>n;
    } while(n<10 || n>100);

    for(i=2; i<n; i++) {
        k=1;
        for(j=2; j<i; j++) {
            if (i%j==0) {k=0; break;}
        }
    if (k==1) {cout << i << " ";}
    k=1;
    }





    return 0;
}
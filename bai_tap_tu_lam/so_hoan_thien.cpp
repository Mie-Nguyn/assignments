#include <iostream>
using namespace std;
int main() {
    int sum=0,n,i,j;
    do {
        cin>>n;
    } while(n<10 || n>100);

    for (i=1; i<n; i++) {
        for (j=1; j<i; j++) {
            if(i%j==0) {sum+=j;}
        }
    if(sum==i) {cout << i << " ";}
    sum=0;
    }




    return 0;
}
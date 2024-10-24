#include <iostream>
using namespace std;
int main() {    
    int a,b,i,j,sum1,sum2;

    cin>>a;
    cin>>b;
    if(a>=1 && b<=10^5 && a<b) {
        for (i=1; i<a; i++) {
            if(a%i==0) {
                sum1 += i;
            }
        }

        for (j=1; j<b; j++) {
            if (b%j==0) {
                sum2 += j;
            }
        }

        if (sum1==b && sum2==a) 
            cout << "Yes";
        else 
            cout << "No";

    } else {cout << "khong hop le"; return 0; }

    return 0;
}
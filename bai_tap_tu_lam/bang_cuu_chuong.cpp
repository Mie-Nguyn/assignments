#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i,j;
        for (i=1; i<=9; i++) {
            cout << "\n";
            for(j=1; j<=9; j++) {
                cout << j << " x " << i << " = " << i*j << setw(3) << " ";
            }
        }
    






    return 0;
}
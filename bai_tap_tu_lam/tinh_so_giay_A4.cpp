#include <iostream>
using namespace std;
int main (){
    long long T, P, C;// nếu sử dụng "int" thì khi xuất tổng só giấy a4 sẽ sai
    cin>> T>> P>> C;
    if (T>=0&&P>=0&&C>=0)
    {  if(T==1){
        cout<< P * C;}
        else if (T==2){
            cout<< (P/2 + P%2)*C;}
        
    
        
        
        
        
    }
   else { cout<<"không hợp lệ";}
    return 0;
    
}
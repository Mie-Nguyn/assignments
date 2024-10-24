    #include <iostream>
    using namespace std;
    int main () {
        cout << "Nhap a,b,c,d,e ";
        long long a,b,c,d,e,tmp=0;
        cin>>a>>b>>c>>d>>e;
        if (a <10^5 && b<10^5 && c<10^5 && d<10^5 && e<10^5) {
            tmp=a;
            if(b>tmp) tmp=b;
            if(c>tmp) tmp=c;
            if(d>tmp) tmp=d;
            if(e>tmp) tmp=e;
            cout << tmp; 
        } else {
            return 0;
        }
         


        return 0;
    }
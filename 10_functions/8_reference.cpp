#include<iostream>
using namespace std;

int main(){

    int a=0;
    cout<<"a:"<<a<<endl;
    int b=10;
    cout<<"a:"<<a<<" b:"<<b<<endl;
    int &c=a;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
    int &d=b;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<endl;
    c++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<endl;
    int &f=c;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<" f:"<<f<<endl;
    f++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<" f:"<<f<<endl;
    int &g=d;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<" f:"<<f<<" g:"<<g<<endl;
    g++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<" f:"<<f<<" g:"<<g<<endl;
    a++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<" f:"<<f<<" g:"<<g<<endl;
    b++;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d<<" f:"<<f<<" g:"<<g<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){ ;
    int a =4;
    int* b = &a;
    int**c =&b;
    cout<<"thr adress of a is" <<b<<endl;
    cout<<&a<<endl;

    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<**c<<endl;
return 0;
}
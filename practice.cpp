#include <iostream>
using namespace std;

int main (){
    int age;
    // int num1 =3;
    // int num2 =4;

    // cout<<(num1&&num2<2)<<endl; //false
    // cout<<(num1<num2)<<endl; //true
    // cout<<(num1!= num2)<<endl; //true

    cout<<"tell me your age"<<endl;
    cin>> age;
    switch (age)
    {
    case 18 :
    cout<<"you r 18";
    /* constant-expression */
        /* code */
        break;
          case 22:
    cout<<"you r 22";
    break;
    default:
    cout<<"no special cases";
    break;
    }
    return 0;
}
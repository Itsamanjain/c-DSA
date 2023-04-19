#include<iostream>
using namespace std;
int main ()
{
    cout<<"hello world!";
    int age ;
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age>18){
        cout<<"you can come in party "<<endl;

    }
    else if (age==18){
        cout<<"you will get kid pass and you can  come in party"<<endl;
    }else{
        cout<<"you cant come"<<endl;
    }
    return 0;
}
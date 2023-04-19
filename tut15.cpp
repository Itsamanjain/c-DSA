#include<iostream>
using namespace std;
//notes remaining--
int sum(int a, int b){
    int c=a+b;
    return c;
}


void g(){
    cout<<"hello good morning";
}

int main(){ 
    int num1,num2;
    cout<<"enter the value of num1 :";
    cin>>num1;
    cout<<"enter the value of num2 :";
    cin>>num2;

    cout<<"the sum is "<<sum(num1,num2)<<endl;
    g();

return 0;
}
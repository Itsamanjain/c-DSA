#include<iostream>
using namespace std;

// call by value & call by function 
void swappointer(int* a ,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){ 
    int x=4,y=3;
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;
    swap(x,y);
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;

return 0;
}
#include<iostream>
using namespace std;

    int sum(int a, int b)
    {
        return a+b;
    }

    int sum (int a ,int b,int c){
        return a+b+c;
    }

    int volume(int l, int b,int h){
        return (l*b*h);
    }
 

 //cube
    int volume(int a){
        return (a*a*a);
    }


    //cyl

    int volume(int r , int h){
        return (3.14*r*r*h);
    }







int main(){ 
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"the volume of rectangle box of 3 , 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cube of 3  is "<<volume(3)<<endl;
    cout<<"the vol of cyl of 3  and 6 is "<<volume(3,6)<<endl;

return 0;
}
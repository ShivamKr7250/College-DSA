#include <iostream>
using namespace std;

void f4(){
    cout<<"Hello World!";
}

void f3(){
    cout<<"Hello World!";
    f4();
}

void f2(){
    cout<<"Hello World!";
    f3();
}

void f1(){
    cout<<"Hello World!";
    f2();
}

int main(){
    f1();
    return 0;

}

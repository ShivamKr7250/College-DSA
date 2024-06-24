#include <iostream>
using namespace std;

void f(int a, int b){
    if( a>b) return;

    cout<<a<<" ";
    f(a+3,b);
}

int main(){
    int num1 = 3;
    int num2 = 15;
    f(num1, num2);
}
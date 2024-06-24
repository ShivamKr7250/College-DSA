#include <iostream>
using namespace std;

void f(int a, int b){
    if( a<b) return;

    cout<<a<<" ";
    f(a-1,b);
}

int main(){
    int num1 = 100;
    int num2 = 1;
    f(num1, num2);
}
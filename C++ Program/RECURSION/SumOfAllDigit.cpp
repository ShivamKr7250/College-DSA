#include<iostream>
using namespace std;

int SumOfALLDigit(int num){
    if(num == 0){
        return 0;        
    }
    else{
        return (num%10 + SumOfALLDigit(num/10));
    }
}


int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;

    int sum = SumOfALLDigit(num);
    cout<<"Sum of All Digit: %d\n" << sum;
}
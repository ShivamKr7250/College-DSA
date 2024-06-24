#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter The Range Of Number \n";
    cin>>num;

    for(int i = 1; i<=num; i++){
        if(i%2 == 0){
            cout<<"The Even Number is: "<<i<<"\n";
        }
        else{
            cout<<"The Odd Number is: "<<i<<"\n";
        }
        
    }
}
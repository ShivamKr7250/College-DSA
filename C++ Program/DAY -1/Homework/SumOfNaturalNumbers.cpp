#include <iostream>

using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<<"Enter the Range of Natural Number \n";
    cin>>num;

    for(int i = 1; i<=num; i++){
        sum = i+sum;
    }
    cout<<"The Total Sum is: "<<sum;
}